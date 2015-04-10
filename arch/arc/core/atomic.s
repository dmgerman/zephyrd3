/* armAtomic.s - ARC atomic operations library */

/*
 * Copyright (c) 2014 Wind River Systems, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1) Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2) Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3) Neither the name of Wind River Systems nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*
DESCRIPTION
This library provides routines to perform a number of atomic operations
on a memory location: add, subtract, increment, decrement, bitwise OR,
bitwise NOR, bitwise AND, bitwise NAND, set, clear and compare-and-swap.
*/

#define _ASMLANGUAGE

#include <toolchain.h>
#include <sections.h>

/* exports */

GTEXT(atomic_set)
GTEXT(atomic_get)
GTEXT(atomic_add)
GTEXT(atomic_nand)
GTEXT(atomic_and)
GTEXT(atomic_or)
GTEXT(atomic_xor)
GTEXT(atomic_clear)
GTEXT(atomic_dec)
GTEXT(atomic_inc)
GTEXT(atomic_sub)
GTEXT(atomic_cas)

	.section .TEXT._Atomic, "ax"
	.balign  2

/*******************************************************************************
*
* atomic_clear - atomically clear a memory location
*
* This routine atomically clears the contents of <target> and returns the old
* value that was in <target>.
*
* This routine can be used from both task and interrupt level.
*
* RETURNS: Contents of <target> before the atomic operation
*
* ERRNO: N/A
*
* atomic_val_t atomic_clear
*    (
*    atomic_t *target	/@ memory location to clear @/
*    )
*/

SECTION_SUBSEC_FUNC(TEXT, atomic_clear_set, atomic_clear)
	mov_s r1, 0
	/* fall through into atomic_set */

/*******************************************************************************
*
* atomic_set - atomically set a memory location
*
* This routine atomically sets the contents of <target> to <value> and returns
* the old value that was in <target>.
*
* This routine can be used from both task and interrupt level.
*
* RETURNS: Contents of <target> before the atomic operation
*
* ERRNO: N/A
*
* atomic_val_t atomic_set
*    (
*    atomic_t *target,	/@ memory location to set @/
*    atomic_val_t value	/@ set with this value @/
*    )
*
*/

SECTION_SUBSEC_FUNC(TEXT, atomic_clear_set, atomic_set)

	ex r1, [r0]		/* swap new value with old value */

	j_s.d [blink]
	mov_s r0, r1		/* return old value */

/******************************************************************************
*
* atomic_get - Get the value of a shared memory atomically
*
* This routine atomically retrieves the value in *target
*
* atomic_val_t atomic_get
*     (
*     atomic_t *target    /@ address of atom to be retrieved @/
*     )
*
* RETURN: value read from address target.
*
*/

SECTION_FUNC(TEXT, atomic_get)
	ld_s r0, [r0, 0]
	j_s [blink]

/*******************************************************************************
*
* atomic_inc - atomically increment a memory location
*
* This routine atomically increments the value in <target>.  The operation is
* done using unsigned integer arithmetic.  Various CPU architectures may impose
* restrictions with regards to the alignment and cache attributes of the
* atomic_t type.
*
* This routine can be used from both task and interrupt level.
*
* RETURNS: Contents of <target> before the atomic operation
*
* ERRNO: N/A
*
* atomic_val_t atomic_inc
*    (
*    atomic_t *target,	/@ memory location to increment @/
*    )
*
*/

SECTION_SUBSEC_FUNC(TEXT, atomic_inc_add, atomic_inc)
	mov_s r1, 1
	/* fall through into atomic_add */

/*******************************************************************************
*
* atomic_add - atomically add a value to a memory location
*
* This routine atomically adds the contents of <target> and <value>, placing
* the result in <target>. The operation is done using signed integer arithmetic.
* Various CPU architectures may impose restrictions with regards to the
* alignment and cache attributes of the atomic_t type.
*
* This routine can be used from both task and interrupt level.
*
* RETURNS: Contents of <target> before the atomic operation
*
* ERRNO: N/A
*
* atomic_val_t atomic_add
*    (
*    atomic_t *target,	/@ memory location to add to @/
*    atomic_val_t value	/@ value to add @/
*    )
*/

SECTION_SUBSEC_FUNC(TEXT, atomic_inc_add, atomic_add)

	llock r2, [r0]	/* load old value and mark exclusive access */
	add_s r3, r1, r2
	scond r3, [r0]	/* try to store new value */

	/* STATUS32.Z = 1 if successful */

	bne_s atomic_add  /* if store is not successful, retry */

	j_s.d [blink]
	mov_s r0, r2		/* return old value */

/*******************************************************************************
*
* atomic_dec - atomically decrement a memory location
*
* This routine atomically decrements the value in <target>.  The operation is
* done using unsigned integer arithmetic.  Various CPU architectures may impose
* restrictions with regards to the alignment and cache attributes of the
* atomic_t type.
*
* This routine can be used from both task and interrupt level.
*
* RETURNS: Contents of <target> before the atomic operation
*
* ERRNO: N/A
*
* atomic_val_t atomic_dec
*    (
*    atomic_t *target,	/@ memory location to decrement @/
*    )
*
*/

SECTION_SUBSEC_FUNC(TEXT, atomic_dec_sub, atomic_dec)
	mov_s r1, 1
	/* fall through into atomic_sub */

/*******************************************************************************
*
* atomic_sub - atomically subtract a value from a memory location
*
* This routine atomically subtracts <value> from the contents of <target>,
* placing the result in <target>.  The operation is done using signed integer
* arithmetic. Various CPU architectures may impose restrictions with regards to
* the alignment and cache attributes of the atomic_t type.
*
* This routine can be used from both task and interrupt level.
*
* RETURNS: Contents of <target> before the atomic operation
*
* ERRNO: N/A
*
* atomic_val_t atomic_sub
*    (
*    atomic_t *target,	/@ memory location to subtract from @/
*    atomic_val_t value	/@ value to subtract @/
*    )
*
*/

SECTION_SUBSEC_FUNC(TEXT, atomic_dec_sub, atomic_sub)

	llock r2, [r0]	/* load old value and mark exclusive access */
	sub r3, r2, r1
	scond r3, [r0]	/* try to store new value */

	/* STATUS32.Z = 1 if successful */

	bne_s atomic_sub  /* if store is not successful, retry */

	j_s.d [blink]
	mov_s r0, r2		/* return old value */

/******************************************************************************
*
* atomic_nand - atomically perform a bitwise NAND on a memory location
*
* This routine atomically performs a bitwise NAND operation of the contents of
* <target> and <value>, placing the result in <target>.
* Various CPU architectures may impose restrictions with regards to the
* alignment and cache attributes of the atomic_t type.
*
* This routine can be used from both task and interrupt level.
*
* RETURNS: Contents of <target> before the atomic operation
*
* ERRNO: N/A
*
* atomic_val_t atomic_nand
*    (
*    atomic_t *target,	/@ memory location to NAND @/
*    atomic_val_t value	/@ NAND with this value @/
*    )
*
*/

SECTION_FUNC(TEXT, atomic_nand)

	llock r2, [r0]	/* load old value and mark exclusive access */
	and r3, r1, r2
	not r3, r3
	scond r3, [r0]	/* try to store new value */

	/* STATUS32.Z = 1 if successful */

	bne_s atomic_nand  /* if store is not successful, retry */

	j_s.d [blink]
	mov_s r0, r2		/* return old value */

/******************************************************************************
*
* atomic_and - atomically perform a bitwise AND on a memory location
*
* This routine atomically performs a bitwise AND operation of the contents of
* <target> and <value>, placing the result in <target>.
* Various CPU architectures may impose restrictions with regards to the
* alignment and cache attributes of the atomic_t type.
*
* This routine can be used from both task and interrupt level.
*
* RETURNS: Contents of <target> before the atomic operation
*
* ERRNO: N/A
*
* atomic_val_t atomic_and
*    (
*    atomic_t *target,	/@ memory location to AND @/
*    atomic_val_t value	/@ AND with this value @/
*    )
*
*/

SECTION_FUNC(TEXT, atomic_and)

	llock r2, [r0]	/* load old value and mark exclusive access */
	and r3, r1, r2
	scond r3, [r0]	/* try to store new value */

	/* STATUS32.Z = 1 if successful */

	bne_s atomic_and  /* if store is not successful, retry */

	j_s.d [blink]
	mov_s r0, r2		/* return old value */

/*******************************************************************************
*
* atomic_or - atomically perform a bitwise OR on memory location
*
* This routine atomically performs a bitwise OR operation of the contents of
* <target> and <value>, placing the result in <target>.
* Various CPU architectures may impose restrictions with regards to the
* alignment and cache attributes of the atomic_t type.
*
* This routine can be used from both task and interrupt level.
*
* RETURNS: Contents of <target> before the atomic operation
*
* ERRNO: N/A
*
* atomic_val_t atomic_or
*    (
*    atomic_t *target,	/@ memory location to OR @/
*    atomic_val_t value	/@ OR with this value @/
*    )
*
*/

SECTION_FUNC(TEXT, atomic_or)

	llock r2, [r0]	/* load old value and mark exclusive access */
	or r3, r1, r2
	scond r3, [r0]	/* try to store new value */

	/* STATUS32.Z = 1 if successful */

	bne_s atomic_or  /* if store is not successful, retry */

	j_s.d [blink]
	mov_s r0, r2		/* return old value */

/*******************************************************************************
*
* atomic_xor - atomically perform a bitwise XOR on a memory location
*
* This routine atomically performs a bitwise XOR operation of the contents of
* <target> and <value>, placing the result in <target>.
* Various CPU architectures may impose restrictions with regards to the
* alignment and cache attributes of the atomic_t type.
*
* This routine can be used from both task and interrupt level.
*
* RETURNS: Contents of <target> before the atomic operation
*
* ERRNO: N/A
*
* atomic_val_t atomic_xor
*    (
*    atomic_t *target,	/@ memory location to XOR @/
*    atomic_val_t value	/@ XOR with this value @/
*    )
*
*/

SECTION_FUNC(TEXT, atomic_xor)

	llock r2, [r0]	/* load old value and mark exclusive access */
	xor r3, r1, r2
	scond r3, [r0]	/* try to store new value */

	/* STATUS32.Z = 1 if successful */

	bne_s atomic_xor  /* if store is not successful, retry */

	j_s.d [blink]
	mov_s r0, r2		/* return old value */

/*******************************************************************************
*
* atomic_cas - atomically compare-and-swap the contents of a memory location
*
* This routine performs an atomic compare-and-swap. testing that the contents of
* <target> contains <oldValue>, and if it does, setting the value of <target>
* to <newValue>. Various CPU architectures may impose restrictions with regards
* to the alignment and cache attributes of the atomic_t type.
*
* This routine can be used from both task and interrupt level.
*
* RETURNS: 1 if the swap is actually executed, 0 otherwise.
*
* ERRNO: N/A
*
* int atomic_cas
*    (
*    atomic_t *target,	    /@ memory location to compare-and-swap @/
*    atomic_val_t oldValue,	/@ compare to this value @/
*    atomic_val_t newValue,	/@ swap with this value @/
*    )
*
*/

SECTION_FUNC(TEXT, atomic_cas)

	llock r3, [r0]	/* load old value and mark exclusive access */
	cmp_s r1, r3

	bne_s nanoAtomicCas_fail

	scond r2, [r0]	/* try to store new value */

	/* STATUS32.Z = 1 if successful */

	bne_s atomic_cas  /* if store is not successful, retry */

	j_s.d [blink]
	mov_s r0, 1		/* return TRUE */

	/* failed comparison */
nanoAtomicCas_fail:
	scond r1, [r0]	/* write old value to clear the access lock */
	j_s.d [blink]
	mov_s r0, 0	/* return FALSE */

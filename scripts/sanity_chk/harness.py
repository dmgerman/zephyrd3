import re
from collections import OrderedDict

class Harness:
    def __init__(self):
        self.state = None
        self.type = None
        self.regex = []
        self.matches = OrderedDict()
        self.ordered = True
        self.repeat = 1

    def configure(self, instance):
        config = instance.test.harness_config
        if config:
            self.type = config.get('type', None)
            self.regex = config.get('regex', [] )
            self.repeat = config.get('repeat', 1)
            self.ordered = config.get('ordered', True)

class Console(Harness):

    def handle(self, line):
        if self.type == "one_line":
            pattern = re.compile(self.regex[0])
            if pattern.match(line):
                self.state = "passed"
        elif self.type == "multi_line":
            for r in self.regex:
                pattern = re.compile(r)
                if pattern.match(line) and not r in self.matches:
                    self.matches[r] = line

            if len(self.matches) == len(self.regex):
                # check ordering
                if not self.ordered:
                    self.state = "passed"
                    return
                ordered = True
                pos = 0
                for k,v in self.matches.items():
                    if k != self.regex[pos]:
                        ordered = False
                    pos += 1

                if ordered:
                    self.state = "passed"
                else:
                    self.state = "failed"



class Test(Harness):
    RUN_PASSED = "PROJECT EXECUTION SUCCESSFUL"
    RUN_FAILED = "PROJECT EXECUTION FAILED"

    def handle(self, line):
        if self.RUN_PASSED in line:
            self.state = "passed"

        if self.RUN_FAILED in line:
            self.state = "failed"

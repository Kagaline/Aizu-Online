class List:
    def __init__(self):
        self.l = []
        self.END = True
        self.cursol = 0

    def insert(self, x):
        if self.END:
            self.l.append(x)
            self.END = False
        else:   
            self.l

    def move(self, d):
        if d >= 0:
            self.cursol += d
        else:
            self.cursol -= abs(d)
    def erase(self):

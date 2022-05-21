class Deque:
    def __init__(self):
        self.deque = {}
        self.head = 0
        self.end = 0

    def push(self, d, x):
        if self.end - self.head == 0:
            self.deque[0] = x
            self.head = -1
            self.end = 1
        else:
            if d == 0:
                self.deque[self.head] = x
                self.head -= 1
            elif d == 1:
                self.deque[self.end] = x
                self.end += 1
        #print(self.deque)
            
    def randomAccess(self, p):
        p = p + self.head + 1
        print(self.deque[p])

    def pop(self, d):
        if d == 0:
            self.head += 1
        elif d == 1:
            self.end -= 1
        #print(self.deque)

deque1 = Deque()

q = int(input())

for _ in range(q):
    query = list(map(int, input().split(" ")))

    if query[0] == 0:
        deque1.push(query[1], query[2])
    elif query[0] == 1:
        deque1.randomAccess(query[1])
    elif query[0] == 2:
        deque1.pop(query[1])

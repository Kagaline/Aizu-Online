class Sets:
    def __init__(self, n):
        self.sets = {i:i for i in range(n)}
        self.counter = n

    def unite(self, x, y):
        color1 = self.sets[x]
        color2 = self.sets[y]
        if color1 == 0:
            self.sets[x] = self.counter
        else:
            for i in range(len(self.sets)):
                if self.sets[i] == color1:
                    self.sets[i] = self.counter

        if color2 == 0:
            self.sets[y] = self.counter
        else:
            for i in range(len(self.sets)):
                if self.sets[i] == color2:
                    self.sets[i] = self.counter

        #print(self.sets)
        self.counter += 1
        return 0

    def same(self, x, y):
        if self.sets[y] == self.sets[x]:
                return int(1)
        return int(0)

    
n, q = map(int, input().split(" "))

sets1 = Sets(n)

for _ in range(q):
    com, x, y = map(int, input().split(" "))

    if com == 0:
        sets1.unite(x, y)
    elif com == 1:
        print(sets1.same(x, y))



class List:
    def __init__(self):
        self.L = [] 
        self.cursol = "END"

    def insert(self, x):
        if self.cursol == "END":
            self.L.append(x)
            self.cursol = 0
        else:
            self.L.insert(self.cursol, x)

    def move(self, d):
        self.cursol += d

    def erase(self):
        self.L.pop(self.cursol)
        if len(self.L) == 0:
            self.cursol = "END"
    
    def printout(self):
        for e in self.L:
            print(e)

if __name__ == "__main__":
    a_list = List()
    q = int(input())
    for _ in range(q):
        query = list(map(int, input().split(" ")))
        if query[0] == 0:
            a_list.insert(query[1])
        elif query[0] == 1:
            a_list.move(query[1])
        elif query[0] == 2:
            a_list.erase()

    a_list.printout()


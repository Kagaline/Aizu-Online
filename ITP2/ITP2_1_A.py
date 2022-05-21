class Vector:
    def __init__(self):
        self.a = []
        
    def pushBack(self, x):
        self.a.append(x)
        #print(self.a)
    
    def randomAccess(self, p):
        print(self.a[p])
    
    def popBack(self):
        self.a.pop()
        #print(self.a)

vector1 = Vector() 

q = int(input())

for _ in range(q):
    query = list(map(int, input().split(" ")))
    if query[0] == 0:
         vector1.pushBack(query[1])
    elif query[0] == 1:
        vector1.randomAccess(query[1])
    elif query[0] == 2:
        vector1.popBack()


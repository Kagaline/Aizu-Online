
class Sets:
    '''
    互いに素な集合のクラス
    '''
    def __init__(self, n):
        '''
        
        '''
        self.number_to_color = {i:i for i in range(n)}
        self.color = n
        self.color_to_numbers = {i:[i] for i in range(n)}
        
    def unite(self, x, y):
        '''
        集合同士を結合する
        '''
        if self.same(x, y):
            return 0
        color1 = self.number_to_color[x]
        color2 = self.number_to_color[y]
        self.color_to_numbers[self.color] = self.color_to_numbers[color1] + self.color_to_numbers[color2]
        for number in self.color_to_numbers[self.color]:
            self.number_to_color[number] = self.color
        self.color += 1
    
    def same(self, x, y):
        '''
        '''
        if self.number_to_color[x] == self.number_to_color[y]:
            return 1
        return 0


n,q = map(int, input().split(" "))

set1 = Sets(n)

for _ in range(q):
    com, x, y = map(int, input().split(" "))
    if com == 0:
        set1.unite(x, y)
    elif com == 1:
        print(set1.same(x, y))
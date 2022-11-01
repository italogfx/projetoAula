class Array(object):
    

    def __init__(self, capacity, fillValue = None):
    
        self.items = list()
        self.logicalSize = 0
        for count in range(capacity):
             self.items.append(fillValue)

    def __len__(self):

        return len(self.items)

    def __str__(self):

        return str(self.items)

    def __iter__(self):
        
        return iter(self.items)

    def __getitem__(self, index):
    
        if index >= 0 and index < self.size():
            
            return self.items[index]

        else:

            print("Nao a e possivel ler o dado dessa posicao")


    def __setitem__(self,index,newItem):


        if index >= 0 and index < self.size():
            
            self.items[index]=newItem
            self.logicalSize += 1

        else:

            print("Nao e possivel ler o dado dessa posicao")
        

    def size(self):
        
        return  len(self.items) - self.logicalSize
        


    pass

def main():

    a = Array(10)
    a[2]= 8
    a[1]= 1
    a[3]= 3
    print(a[8], a[1], a[3])
    print(a.size())
    b = int(input("digite o valor"))
    print(a[b])
    
main()

    
        
         

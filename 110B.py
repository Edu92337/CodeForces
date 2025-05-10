n = int(input())
lucky = ''
colocados = ['a','b','c','d']
for i in range(n):
    lucky += colocados[(i)%4]
print(lucky)
        
            



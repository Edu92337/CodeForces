n = int(input())
vec = input().split()
norm = 0
inv = 0
filas = int(input())
valores = input().split()
dic  = {val:index +1 for index,val in enumerate(vec)}

for v in valores:
    norm += dic[v]
    inv += n - dic[v] +1
print(norm,inv)
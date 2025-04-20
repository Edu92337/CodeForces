n,m,d =[int(i) for i in input().split()]
mat = []
for _ in range(n):
    valores = [int(i) for i in input().split()]
    for v in valores:
        mat.append(v)
mat.sort()
mediana = mat[len(mat)//2]
moves = 0
tag = True
for v in mat:
    if abs(v - mediana) % d == 0:
        moves += abs(v - mediana)//d
    else:
        tag = False
        break
if tag == True:
    print(moves)
else:
    print(-1)

import math
t = int(input())
pares = []
for i in range(0,t):
    n_x = input().split()
    n_x = [int(i) for i in n_x]
    pares.append(n_x)


for par in pares:
    if par[0] > 2:
        andar = math.ceil(((par[0]-2)/par[1])+1)
        print(andar)
    if par[0] <= 2:
        print("1")

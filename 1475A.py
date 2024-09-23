import math
t = int(input())
respostas = []
for x in range(0,t):
    n = int(input())
    #verifica se o numero é uma potencia de 2
    if math.log2(n) != int(math.log2(n)):# não é potencia de 2
        respostas.append('YES')
    else:
        respostas.append('NO')
for r in respostas:
    print(r)

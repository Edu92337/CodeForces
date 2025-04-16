n,m = [int(i) for i in input().split()]
doces = [int(i) for i in input().split()]
criancas = [i for i in range(1,n+1)]
while len(criancas) != 1:
    if doces[criancas[0]-1] - m <= 0:
        criancas.remove(criancas[0])
    else:
        doces[criancas[0]-1] -= m
        crianca = criancas[0]
        criancas.remove(criancas[0])
        criancas.append(crianca)
print(criancas[0])
    
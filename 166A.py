n,k = [int(i) for i in input().split()]
colocacao = []
for _ in range(n):
    vt = [int(i) for i in input().split()]
    colocacao.append(vt)
colocacao.sort(key=lambda x: (-x[0],x[1]))
kesimo = colocacao[k-1]
print(colocacao.count(kesimo))



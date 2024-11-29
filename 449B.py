n_m = input().split()
n,m=int(n_m[0]),int(n_m[1])
pares = {}
for _ in range(m):
    par = input().split()
    pares[par[0]] = par[1]
frase = input().split()
for i in range(len(frase)):
    if len(frase[i]) > len(pares[frase[i]]):
        frase[i] = pares[frase[i]]
print(' '.join(frase))

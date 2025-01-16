n,k = list(map(int,input().split()))
h = list(map(int,input().split()))
v = float('inf')
indice = len(h)
soma_atual = sum(h[:k])
v = soma_atual
indice = 1
for i in range(1, n - k + 1):
    soma_atual = soma_atual - h[i - 1] + h[i + k - 1]
    if soma_atual < v:
        v = soma_atual
        indice = i + 1

print(indice)

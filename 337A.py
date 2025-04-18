n,m = [int(i) for i in input().split()]
pecas = [int(i) for i in input().split()]
pecas.sort()
min_dif = float('inf')
for i in range(m-n+1):
    if pecas[i+n-1] - pecas[i] < min_dif:
        min_dif = pecas[i+n-1] - pecas[i]
print(min_dif)

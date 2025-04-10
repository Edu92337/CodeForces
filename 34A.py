n = int(input())
alturas = [int(i) for i in input().split()]
j,k = 0,0
min_dif = float('inf')
n = len(alturas)
for i in range(n):
    dif = abs(alturas[i] - alturas[(i+1)%n])
    if dif < min_dif:
        j,k = i,(i+1)%(n)
        min_dif = dif
print(j+1,k+1)

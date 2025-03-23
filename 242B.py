n  = int(input())
segmentos = [tuple(map(int, input().split())) for _ in range(n)]
print(segmentos)
min_l = float('inf')
max_r = -float('inf')
posicao = -1
for l, r in segmentos:
    if l < min_l:
        min_l = l
    if r > max_r:
        max_r = r
for i, (l, r) in enumerate(segmentos):
    if l == min_l and r == max_r:
        print(i + 1)  
        break
else:
    print(-1)

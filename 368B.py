def suf_dif(vec):
    vistos = set()
    dif = [0]*(len(vec))
    atual = 0
    for i in range(len(vec)-1,- 1, -1):
        if vec[i] not in vistos:
            vistos.add(vec[i])
            dif[i] = atual + 1
            atual += 1
        else:
            dif[i] = atual
    return dif

n,m = [int(i) for i in input().split()]
v = [int(i) for i in input().split()]
difs = suf_dif(v)
for _ in range(m):
    l = int(input())
    print(difs[l-1])

    
t = int(input())
resp = []
for _ in range(t):
    n_m = input().split()
    n,m = int(n_m[0]),int(n_m[1])
    palavras = []
    strip = 0
    for _ in range(n):
        p = input()
        palavras.append(p)
    caracteres = 0
    for p in palavras:
        if caracteres + len(p) <= m:
            caracteres += len(p)
            strip += 1
        else:
            break
    resp.append(strip)

for r in resp:
    print(r)
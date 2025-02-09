n = int(input())
palavras = []
novas = []
for i in range(n):
    p = input()
    palavras.append(p)
for p in palavras:
    if p[-2:] == 'us':
        nova = p[:-2] + 'i'
        novas.append(nova)
for r in novas:
    print(r)
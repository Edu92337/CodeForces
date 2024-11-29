t = int(input())
dic = {}
resp = []
palavras = []
for x in range(t):
    palavra = input()
    palavras.append(palavra)
    if palavra not in dic:
        resp.append("OK")
        dic[palavra] = 0
    else:
        dic[palavra] += 1
        resp.append(f'{palavra}{dic[palavra]}')
for r in resp:
    print(r)


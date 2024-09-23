codeforces = 'codeforces'
t = int(input())
respostas = []
for x in range(0,t):
    letra = input()
    if letra in codeforces:
        respostas.append('YES')
    else:
        respostas.append('NO')
for r in respostas:
    print(r)
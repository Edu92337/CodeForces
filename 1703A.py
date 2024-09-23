t = int(input())
respostas = []
for c in range(0,t):
    palavra = input()
    if palavra.lower() == 'yes':
        respostas.append('YES')
    else:
        respostas.append('NO')
for r in respostas:
    print(r)
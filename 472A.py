respostas = []
t = int(input())
for c in range(0,t):
    palavra = input()
    if palavra == 'cab' or palavra == 'bca':
        respostas.append('NO')
    else:
        respostas.append('YES')
for r in respostas:
    print(r)

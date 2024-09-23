t = int(input())
respostas = []
for c in range(0,t):
    palavra = input()
    if len(palavra) == 1:
        respostas.append('NO')
    else:
        if palavra[0:int(len(palavra)/2)] == palavra[int(len(palavra)/2):]:
            respostas.append('YES')
        else:
            respostas.append('NO')
for  r in respostas:
    print(r)

t = int(input())
respostas = []
for x in range(0,t):
    numero = int(input())
    if numero <= 1399 :
        respostas.append('Division 4')
    elif 1400 <= numero <= 1599:
        respostas.append('Division 3')
    elif 1600 <= numero <= 1899:
        respostas.append('Division 2')
    else:
        respostas.append('Division 1')


for r in respostas:
    print(r)
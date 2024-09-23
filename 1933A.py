t=int(input())
somas = []
for i in range(0,t):
    tamanho = int(input())
    sequencia = input().split()
    sequencia = [int(x) for x in sequencia]
    # sequencia.sort()
    for j in range(0,tamanho):
        if sequencia[j] < 0 :
            sequencia[j] = sequencia[j]*(-1)
           
    soma = sum(sequencia)
    somas.append(soma)
    soma = 0
for s in range(0,len(somas)):
    print(somas[s])

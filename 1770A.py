t = int(input())
sequencias = []

for i in range(0,t):
    sequencia = input().split()
    sequencia = [int(i) for i in sequencia]
    sequencia.sort()
    del sequencia[0]
    del sequencia[-1]
    #adiciona o elemento e nao a lista
    sequencias.append(sequencia[0])

for i in range(0,len(sequencias)):
    print(sequencias[i])








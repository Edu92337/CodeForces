t = int(input())
respostas = []
contador = 0
for x in range(0,t):
    n_d = input().split()
    n_d = [int(i) for i in n_d]
    array = input().split()
    array = [int(i) for i in array]
    array.sort()
    menor_soma_possivel = 0

    for i in range(1,len(array)):
        menor_soma_possivel = array[0] + array[1]
        if array[-i] > n_d[1]:
            array.remove(array[-i]) 
            array.append(menor_soma_possivel)

    for numero in array :
        if numero > n_d[1]:
            contador += 1
    if contador == 0:
        respostas.append('YES')
    else:
        respostas.append('NO')

    contador = 0

for r in respostas:
    print(r)



            


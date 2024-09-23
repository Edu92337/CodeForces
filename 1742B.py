t = int(input())
respostas = []
contador = 1
for i in range(0,t):
    n = int(input())
    array = input().split()
    array = [int(x) for x in array]
    array.sort()

    for j in range(1,len(array)):
        if array[j] > array[j -1]:
            contador += 1
        if array[j] <= array[j-1]:
            contador += -1

    
    if contador != len(array):
        respostas.append('NO')
    else:
        respostas.append('YES')
    contador = 1
for r in respostas:
    print(r)
t= int(input())
l_cores_1 = []
l_cores_2 = []
respostas = []
for i in range(0,t):
    n = int(input())
    cores_1 = input()
    cores_2 = input()
    for cor in cores_1:
        l_cores_1.append(cor)
    for cor in cores_2:
        l_cores_2.append(cor)
    for x in range(0,n):
        if l_cores_1[x] == 'B':
            l_cores_1.insert(x,'G')
            l_cores_1.remove('B')
    for x in range(0,n):
        if l_cores_2[x] == 'B':
            l_cores_2.insert(x,'G')
            l_cores_2.remove('B')
    if l_cores_1 == l_cores_2:
        respostas.append('YES')
    else:
        respostas.append('NO')
    l_cores_1.clear()
    l_cores_2.clear()
for resposta in respostas:
    print(resposta)
    


   

    

        
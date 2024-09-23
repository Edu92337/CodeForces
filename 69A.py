n = int(input())
vetores = []
#adiciona todos vetores a lista vetores =[]
for x in range(0,n):
    vetor = input().split()
    vetor =[int(i) for i in vetor]
    vetores.append(vetor)
#inicia com um vetor nulo (0,0,0)
x_resultante = 0
y_resultante = 0
z_resultante = 0
#acrescenta as componentes do vetor nulo as componentes dos vetore
for i in range(0,n):
    x_resultante += vetores[i][0] 
    y_resultante += vetores[i][1]
    z_resultante += vetores[i][2]
#o vetor resultante também precisa ser nulo (x_r,y_r,z_r)=(0,0,0)
if x_resultante == 0 and y_resultante ==0 and z_resultante == 0:
    print('YES')
else:
    print('NO')










#para calcular a area de um quadrado so precisa saber 3 pontos e a area ja ta determinada
#porque as unicas possibilidades sao lado ou diagonal
import math
t= int(input())
pares = []
areas=[]
#loopa pra mais de um quadrado
for j in range(0,t):
    #pega os valores e faz a lista dos pares do quadrad
    for i in range(0,4):
        x_y = input().split()
        x_y = [int(i) for i in x_y]
        pares.append(x_y)
#faz o pitadoras pros 3 primeiros valores de cada quadrado
    l1=math.dist(pares[0],pares[1])
    l2=math.dist(pares[0],pares[2])
#o maior valor é a diagonal e o menor é o lado
    if l1 < l2 :
        areas.append(l1**2)
#caso eles sejam iguais quer dizer que os pontos [0][1][2] são lados consecutivos
    if l1 >= l2:
        #adicona o valor ^2 para a lista de areas 
        areas.append(l2**2)
    #limpa a lista dos pares para o proximo quadrado
    pares.clear()
for i in range(0,t):
    print(int(areas[i]))

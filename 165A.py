n = int(input())
pontos = []
centrais = 0
for _ in range(n):
    ponto = [int(i) for i in input().split()]
    pontos.append(ponto)

for i in range(n):
    vizinhos = 0
    superior = False
    inferior = False
    esquerda = False
    direita = False
    for j in range(n):
        if pontos[j][0] == pontos[i][0] and pontos[j][1] < pontos[i][1]:
            inferior = True
        elif pontos[j][0] == pontos[i][0] and pontos[j][1] > pontos[i][1]:
            superior = True
        elif pontos[j][1] == pontos[i][1] and pontos[j][0] < pontos[i][0]:
            esquerda = True
        elif pontos[j][1] == pontos[i][1] and pontos[j][0] > pontos[i][0]:
            direita = True
    if superior == True and inferior == True and esquerda == True and direita == True:
        centrais += 1
            
    
print(centrais)


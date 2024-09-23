t = int(input())
respostas = []
operações = []
for x in range(0,t):
    n = int(input())
    array = input().split()
    array= [int(i) for i in array]
#achei o valor maximo que todos os valores devem chegar
    valor_maximo = max(array)
    for valor in array:
#em cada operação pelo menos um elemento acrescenta de 1
#so precisa saber a maior diferença para achar o min
#de movimentos
        operação = valor_maximo - valor
        operações.append(operação)
    respostas.append(max(operações))
    operações.clear()
for r in respostas :
    print(r)



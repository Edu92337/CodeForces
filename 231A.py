# n = numero de problemas no campeonato
n = int(input())
valores = []
vitorias = []
derrotas = []
for i in range(0,n):
    valoresi =str(input())
    valores.append(valoresi)

for i in range(0,n):
    numero_de_1 = valores[i].count("1")
    numero_de_0 = valores[i].count("0") 
    if numero_de_1 > numero_de_0:
        vitorias.append(valores[i])
    else:
        derrotas.append(valores[i])
print(len(vitorias))





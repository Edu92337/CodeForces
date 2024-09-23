t = int(input())
letras_dif = 0
lista_palavras = []
codeforces = "codeforces"
for i in range(0,t):
    palavra = str(input())
    lista_palavras.append(palavra)

for palavra in lista_palavras:
    for j in range(0,10):
        if palavra[j] == codeforces[j]:
             continue
        if palavra[j] != codeforces[j]:
            letras_dif += 1
    print(letras_dif)
    letras_dif = 0


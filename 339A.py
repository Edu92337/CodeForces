s = input()
lista_s = []
lista_f = []
for letra in s:
    lista_s.append(letra)
    #removi os elementos + pra ficar uma lista de str de numeros
    if letra == "+":
        lista_s.remove(letra)
#TROCA O TIPO DOS ELEMENTOS NA LISTA (list comprehension)
# lista_s = [int(numeros) for numeros in lista_s]
lista_s.sort()
#.join : coloca oque vem antes do . entre os elementos da list
print("+".join(lista_s))
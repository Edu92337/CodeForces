convidado = input()
anfitrião = input()
palavra_encontrada = input()
lista_encontrada = []
lista_conv_anfi = []
for letra in palavra_encontrada:
    lista_encontrada.append(letra)
lista_encontrada.sort()


for letra in convidado:
    lista_conv_anfi.append(letra)

for letra in anfitrião:
    lista_conv_anfi.append(letra)

lista_conv_anfi.sort()

if lista_encontrada == lista_conv_anfi:
    print("YES")

if lista_conv_anfi != lista_encontrada:
    print("NO")



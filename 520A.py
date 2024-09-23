n = int(input())
pangram = 0
palavra = str(input())
palavra = palavra.lower()
lista_letras = []
#lista com as letras da palavra em minusculo(para comparação)
for letra in palavra:
    lista_letras.append(letra)

alfabeto = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
#condição pangram:a palavra deve conter TODAS letras do alfabeto = count > 0
for letra in alfabeto :
    if lista_letras.count(letra) > 0:
        #pangram += 1 faz ele aumentar uma unidade para cada letra do alfabeto que está na palavra
        #para todas letras estarem na palavra => pangram = 26
        pangram += 1
    if lista_letras.count(letra) == 0 :
        pangram = 0 
#condição do alfabeto
if pangram == 26:
    print("YES")
if pangram != 26:
    print("NO")





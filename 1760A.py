t = int(input())
alfabeto = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
semi_alfabetos =[]
lista_palavra=[]
for i in range(0,t):
    comprimento = int(input())
    palavra = input()
    for letra in palavra:
        lista_palavra.append(letra)
    lista_palavra.sort()
    semi_alfabetos.append(alfabeto.index(max(lista_palavra))+1)
    lista_palavra.clear()

for num in semi_alfabetos:
    print(num)


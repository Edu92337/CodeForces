n = int(input())
imas = []
#contador =1 quer dizer que pelo menos o primeiro elemento é diferente
contador = 1
#criando a lista
for i in range(0,n):
    ima = input() 
    imas.append(ima)
#olhando se o elemento i é igual ao anterior,caso contrario aumenta 1 ao contador
for i in range(1,len(imas)):
    if imas[i] != imas[i -1]:
        contador += 1
print(contador)



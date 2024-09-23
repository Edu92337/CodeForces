array = input().split()
array = [int(x) for x in array]
pares = 0
numeros = []
for numero in array:
    #verifica se ja existe esse numero no array
    if numero in numeros:
        #variavel para calcular o numero de pares diferentes
        pares+=1
    numeros.append(numero)
    
print(pares)
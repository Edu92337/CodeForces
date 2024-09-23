n = int(input())
lista = []
for i in range(1,n+1):
    if i % 2 != 0 :
        lista.append("I hate")
    if i %2 == 0 :
        lista.append("I love")

print(" that ".join(lista)+" it")

n = int(input())
meninos = input().split()
meninos = [int(i) for i in meninos]
meninos.sort()
m = int(input())
meninas = input().split()
meninas = [int(i) for i in meninas]
contador = 0
for menino in meninos:
    if menino-1 in meninas:
        contador +=1
        meninas.remove(menino-1)
    elif menino  in meninas :
        contador +=1
        meninas.remove(menino)
    elif menino +1 in meninas :
        contador +=1
        meninas.remove(menino+1)
print(contador)


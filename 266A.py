n =int(input())
pedras = input()
contador = 0
for i in range(1,len(pedras)):
    if pedras[i] == pedras[i-1]:
        contador += 1
print(contador)
    







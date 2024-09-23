n = int(input())
x = 0
Mais = []
Menos = []
for i in range(0,n):
    valor = str(input())
    if valor == "++X" or valor =="X++":
        Mais.append(valor)
    elif valor == "--X" or valor == "X--":
        Menos.append(valor)

print(int(x) + int(len(Mais)) - int(len((Menos)))) 
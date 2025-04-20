n = int(input())
garrafas = {}
fechadas = []
podem_ser_abertas = []
for _ in range(n):
    a,b = input().split()
    fechadas.append(a)
    podem_ser_abertas.append(b)
    if a not in garrafas:
        garrafas[a] = [b]
    else:
        garrafas[a].append(b)
total = 0

for i, garrafa in enumerate(fechadas):
    aberta = False
    for j, tampa in enumerate(podem_ser_abertas):
        if i != j and tampa == garrafa:
            aberta = True
            break
    if not aberta:
        total += 1
print(total)
 
 
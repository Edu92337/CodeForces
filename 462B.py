from collections import Counter
n,k = [int(i) for i in input().split()]
cartas = input()
cartas_originais = Counter(cartas)
valor = 0
for key in sorted(cartas_originais.keys(),key=lambda x:-cartas_originais[x]):
    if k != 0:
        if k - cartas_originais[key] >= 0:
            k -= cartas_originais[key]
            valor += cartas_originais[key]**2
        else:
            valor += k**2
            k = 0
print(valor)
s = input()
t = input()
lista_s = []
lista_t = []

for letra in s:
    lista_s.append(letra)
for letra in t:
    lista_t.append(letra)


lista_t.reverse()


if lista_t == lista_s:
    print("YES")
if lista_t != lista_s:
    print("NO")
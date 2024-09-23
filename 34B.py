n_m = input().split()
n_m = [ int(c) for c in n_m]
n,m = n_m[0],n_m[1]
valores = input().split()
valores = [int(c) for c in valores]
tvs_boas = []
for valor in valores:
    if valor < 0 :
        tvs_boas.append(valor)
#cuidado em fazer .sort() com numeros negativos
tvs_boas.sort()

print(abs(sum(tvs_boas[0:m])))


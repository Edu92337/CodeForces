primos= [2,3,5,7,11,13,17,19,23,29,31,37,41,43,47]
n_m = input().split()
n_m = [int(c)for c in n_m]
n,m = n_m[0],n_m[1]
if n in primos and m in primos:
    #se eles estiverem em sequencia
    #os index devem estar com diferença de +- 1
    if primos.index(n) == primos.index(m) -1:
        print('YES')

    else:
        print('NO')
#se um dos numeros não for primo,não exite comparação
else:
    print('NO')


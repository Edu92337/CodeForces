n = int(input())
array = input().split()
array = [int(x) for x in array]
par = []
impar = []
for numero in array:
    if numero % 2 == 0 :
        par.append(numero)
    else:
        impar.append(numero)
if len(par) == 1 :
    print(array.index(par[0])+1)
elif len(impar) == 1:
    print(array.index(impar[0])+1)
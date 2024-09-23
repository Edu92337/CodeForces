from fractions import Fraction
universo = [1,2,3,4,5,6]
array = input().split()
array = [int(x) for x in array]
maior_valor = max(array)
evento = len(universo[universo.index(maior_valor):])

if Fraction(evento,len(universo)) == 1:
    print('1/1')
else:
    print(Fraction(evento,len(universo)))


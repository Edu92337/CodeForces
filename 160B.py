n = int(input())
num = input()
t = len(num)
inicio = sorted([int(i) for i in num[0:n]])
final = sorted([int(i) for i in num[n:]])
criterio = True
menores = all(i < f for i,f in zip(inicio,final))
maiores = all(i > f for i,f in zip(inicio,final))
print('YES' if menores == True or maiores == True else 'NO')

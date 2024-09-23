pesos = input().split()
t = 0
a = int(pesos[0])
b =int(pesos[1])
while a <= b:
    a = a*3
    b = 2*b
    t += 1

print(t)
    
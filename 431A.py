valores = input().split()
valores = [int(i) for i in valores]
sequencia = input()
dic = {}
cal=0
for i in range(4):
    dic[i+1]=valores[i]
for numero in sequencia:
    cal +=dic[int(numero)]
print(cal)
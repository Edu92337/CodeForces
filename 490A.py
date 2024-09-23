t = int(input())
sequencia = input().split()
sequencia = [int(i) for i in sequencia]
p1 = [i for i,k in enumerate(sequencia) if k ==1]
p2 = [i for i,k in enumerate(sequencia) if k ==2]
p3 = [i for i,k in enumerate(sequencia) if k ==3]
qnt = min(len(p1),len(p2),len(p3))
print(qnt)
for i in range(qnt):
    print(p1[i]+1,p2[i]+1,p3[i]+1)
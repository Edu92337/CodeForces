n = int(input())
dedos = list(map(int,input().split()))
pessoas = n+1
resto = sum(dedos)%pessoas
qnt = 0
for i in range(1,6):
    if (sum(dedos)+i)%pessoas != 1:
        qnt += 1
print(qnt)

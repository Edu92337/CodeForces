n = int(input())
a = [int(i) for i in input().split()]
m = int(input())
b = [int(i) for i in input().split()]
razao = {}
for i in a:
    for j in b:
        if j % i == 0:
            if j//i not in razao:
                razao[j//i] = 1
            else:
                razao[j//i] += 1 

print(razao[max(razao.keys())])

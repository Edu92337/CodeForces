k = int(input())
arr = list(map(int,input().split()))
t = 0
contador = 0
while t < k:
    if len(arr) != 0:
        maior = max(arr)
    else:
        contador = -1
        break
    t += maior 
    contador += 1
    arr.remove(maior)
print(contador)
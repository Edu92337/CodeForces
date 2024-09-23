n,k = input().split()
str_n = str(n)
n = int(n)
k = int(k)
contador = 0
while contador < k :
    if str_n[-1] == "0":
         n = int(n/10)
         str_n = str(n)
         if contador >= k :
             break
         contador += 1
    if n == "1":
        break

    if str_n[-1] != "0":
        n = n - 1
        str_n = str(n)
        if contador >= k :
             break
        contador += 1
    
            
print(n)
print(contador)
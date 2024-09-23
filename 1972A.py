
t = int(input())
respostas = []
for c in range(0,t):
    n = int(input())
    a = input().split()
    a = [int(x) for x in a]
    b = input().split()
    b = [ int(x) for x in b]
    i = 0
    contador = 0
    for i in range(0,n):
        if a[i] > b[i]:
            a = a[:-1]
            a.append(b[i])
            a.sort()
            contador+=1
    respostas.append(contador)  
for r in respostas:
    print(r)   
    

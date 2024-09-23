t = int(input())
resp = []
for x in range(t):
    n = int(input())
    a = input().split()
    a = [int(i) for i in a]
    if len(a) > 3:
        while len(a) != 3:
            m = len(a)
            soma = float('inf')
            posição = 0
            maior = 0
            for i in range(m-1):
                if sum(a[i:i+2]) < soma :
                    soma = sum(a[i:i+2])
                    posição = i
            a=a[:posição]+a[posição+2:]
        
         #para 3
        soma = float('inf')
        for i in range(2):
            if sum(a[i:i+2]) < soma :
                soma = sum(a[i:i+2])
                posição = i
        a=a[:posição]+a[posição+2:]
        resp.append(a[0])

    else:
        soma = float('inf')
        for i in range(2):
            if sum(a[i:i+2]) < soma :
                soma = sum(a[i:i+2])
                posição = i
        a=a[:posição]+a[posição+2:]
        resp.append(a[0])

        

for r in resp:
    print(r)
        
        




            

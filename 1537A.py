t = int(input())
pares = []
contador = -1
for z in range(0,t):
    a_b = input().split()
    a_b = [int(x) for x in a_b]
    for i in range(0,a_b[1]+1):
        for j in range(0, a_b[0]+1):
            valor = j +2*i
            par =[j,i]
            contador += 1
            pares.append(par)
            if contador != valor:
                pares.remove(par)
            

print(len(pares))



        

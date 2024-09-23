t= int(input())
respostas = []
for c in range(0,t):
    M3 = 0
    M2 = 0
    movimentos = 0
    n = int(input())
    n2,n3 = n,n
    #achar os fatores 3
    while n3 % 3 == 0:
        n3 = n3/3
        M3 += 1
        #achar fatores 2
    while n2 % 2 == 0:
        n2 = n2/2
        M2 += 1
    if n == 1 :
        respostas.append(0)
    elif M3 == 0 or M2 == 0:
        respostas.append(-1)
        break
    else:
        respostas.append(min(M2,M3) + 2*(max(M2,M3) - min(M2,M3)))
    
    # movimentos = min(M2,M3) + 2*(max(M2,M3) - min(M2,M3))


    # movimentos += M2
    # M3 -= M2
    # movimentos += M3*2
    # respostas.append(movimentos)

   



for r in respostas:
    print(r)

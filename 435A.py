n,m  = list(map(int,input().split()))
onibus  = list(map(int,input().split()))
capacidade = m
voltas = 0
for grupo in onibus:
    if grupo <= capacidade:
        capacidade -= grupo
    else:
        capacidade = m - grupo
        voltas +=1
print(voltas+1)

            



    




      
        

        

    

def icpc(n_k,sequencia):
    
    n_k = [int(i) for i in n_k]
    n,k = n_k[0],n_k[1]
    sequencia = [int(i) for i in sequencia]
    membros = 0
    for i in range(0,n):
        if sequencia[i] + k <= 5:
            membros +=1
    times = membros//3
    return times
            
print(icpc(input().split(),input().split()))



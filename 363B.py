def muros(n_k,sequencia):
    sequencia = [int(c) for c in sequencia]
    n_k = [int(c) for c in n_k]
    n,k = n_k[0],n_k[1]
    somas = 0
    posição = 0
    for i in range(0,n-k+1):
        soma = sum(sequencia[i:i+k])
        if soma < somas :
            posição = i
        if soma >= somas:
            somas = soma
    return posição+1
        
print(muros(n_k=input().split(),sequencia=input().split()))



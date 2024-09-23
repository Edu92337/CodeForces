def recebidos(n,sequencia):
    sequencia = [int(i) for i in sequencia]
    rec = []
    for i in range(1,n+1):
        rec.append(str(sequencia.index(i)+1))
    
    return  ' '.join(rec)



print(recebidos(int(input()),input().split()))
    
         
    
        


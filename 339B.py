def tempo_total(n_m,sequencia):
    n_m = [int(c) for c in n_m]
    n,m = n_m[0],n_m[1]
    sequencia = [int(c) for c in sequencia]
    sequencia.insert(0,1)

    tempo = 0
    for i in range(1,len(sequencia)):
        if sequencia[i] >= sequencia[i-1]:
            tempo += sequencia[i] - sequencia[i-1]
        if sequencia[i] < sequencia[i-1]:
            tempo += n - abs((sequencia[i] - sequencia[i-1]))
    return tempo
print(tempo_total(input().split(),input().split()))


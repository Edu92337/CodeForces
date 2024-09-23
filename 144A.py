def swipe(n,sequencia):
    n = int(n)
    sequencia = [int(i) for i in sequencia]
    menor = min(sequencia)
    maior = max(sequencia)
    min_posições = [i for i,k in enumerate(sequencia) if k == menor]
    max_posições = [i for i,k in enumerate(sequencia) if k == maior]
    t = min(max_posições) + abs(max(min_posições) - len(sequencia) +1)
    if min(max_posições) > max(min_posições):
        t -=1
    return t 



print(swipe(input(),input().split()))

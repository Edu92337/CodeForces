def vitorias(n,array):
    array = [int(c) for c in array]
    n = int(n)
    menor = array[0]
    maior = array[0]
    pontos = 0
    for i in range(1,len(array)):
        if array[i] > maior :
            maior = array[i]
            pontos += 1
        if array[i] < menor :
            menor = array[i]
            pontos += 1
    return pontos

print(vitorias(input(),input().split()))
        


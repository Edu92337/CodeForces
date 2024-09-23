def meias(lista):
    lista = [int(i) for i in lista]
    pares = lista[0]
    frequencia_de_compra =lista[1]
    dias = 0
    dias_totas = 0
    while pares > 0:
        dias_totas += 1
        pares -= 1
        dias +=1
        if dias == frequencia_de_compra:
            pares +=1
            dias = 0
    return dias_totas
      
print(meias(input().split()))

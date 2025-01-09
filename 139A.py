n = int(input())
paginas = list(map(int,input().split()))
paginas_totais = 0
dias = 0
i = 0
def calcula_dias(n,paginas):
    paginas_totais = 0
    while paginas_totais <=n:
        dias = 0
        i = 0
        while i < len(paginas):
            paginas_totais += paginas[i]
            dias +=1
            if paginas_totais >= n:
                return dias
            i += 1
    

print(calcula_dias(n,paginas))
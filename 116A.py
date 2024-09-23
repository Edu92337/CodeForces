n = int(input())
capacidades = []
lista_pares = []
p_trem = 0 
for i in range(0,n):
    a_b = input().split()
    a_b = [int(i) for i in a_b]
    lista_pares.append(a_b)


for i in range(0,n):
    p_trem = p_trem + lista_pares[i][1] - lista_pares[i][0]
    capacidades.append(p_trem)
print(max(capacidades) )
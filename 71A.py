# criando listas vazias
lst = []
# numero de elementos no input
n = int(input())
#criando as listas
for i in range(0, n):
    ele = str(input())
    # adicionando os elementos
    lst.append(ele)  
tamanho = int(len(lst))
for i in range(0,tamanho):
    if len(lst[i]) <= 10:
        print(lst[i])
    else: 
        print(str(lst[i][0]) + str(len(str(lst[i]))-2) + str(lst[i][-1]))


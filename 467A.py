p_q = []
quartos_livres = 0
n =int(input())
#faz as litas com os pares ordenados p e q
for i in range(0,n):
    dupla = str(input()).split()
    dupla = [int(x) for x in dupla]
    p_q.append(dupla)
#pra poder usar o quarto precisa de pelo menos dois espaços livres
for dupla in p_q:
    if dupla[1] - dupla[0] >= 2:
        #sempre que essa condição for satisfeita o quarto é valido para usar
        quartos_livres +=1
print(quartos_livres) 
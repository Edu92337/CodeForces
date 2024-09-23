n =int(input())
niveis_juntos =[]
jogo = []
#listas dos inputs e transformar em uma lista só!!
for i in range(0,2):
    niveis = input().split()
    niveis.remove(niveis[0])
    #aqui transforma em uma só
    for j in range(0,len(niveis)):
        niveis_juntos.append(niveis[j])

#faz todos elementos serem numeros inteiros
niveis_juntos = [int(i) for i in niveis_juntos]
niveis_juntos.sort()

#remove elementos duplicados
for numeros in niveis_juntos:
    if niveis_juntos.count(numeros) > 1:
        niveis_juntos.remove(numeros)


#cria a sequencia de 1 a n
for i in range (1,n+1):
    jogo.append(i)
    
#compara as duas listas que representam a sequenja,ja que as duas estao ordenadas
if niveis_juntos == jogo:
    print("I become the guy.")
if niveis_juntos != jogo:
    print("Oh, my keyboard!")


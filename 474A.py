alfabeto =['q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/']
direção = input()
palavra_errada = input()
palavra_nova = []
for letra in palavra_errada:
    #se as letras estiverem deslocas para a esquerda
    if direção == 'L':
        #precisa deslocar para a direita para compensar index +=1
        palavra_nova.append(alfabeto[alfabeto.index(letra)+1])
    if direção == 'R':
        #index -= 1
        palavra_nova.append(alfabeto[alfabeto.index(letra)-1])


print(''.join(palavra_nova))
        

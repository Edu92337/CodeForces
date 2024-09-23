t = int(input())
respostas = []
lista_letras = []
for x in range(0,t):
    palavra = input()
    for letra in palavra :
        lista_letras.append(letra)
    lista_letras.sort()
    n_a = lista_letras.count('A')
    n_b = lista_letras.count('B')
    n_c = lista_letras.count('C')
    x = n_b - n_a
    if x < 0 :
        respostas.append('NO')
    if x == 0 and n_c !=0 :
        respostas.append('NO')
    if x == 0 and n_c == 0:
        respostas.append('YES')
    if x >0 :
        y = x - n_c
        if y == 0:
            respostas.append('YES')
        else:
            respostas.append('NO')



    lista_letras.clear()
    

    
for i in range(0,len(respostas)):
    print(respostas[i])
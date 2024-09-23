t = int(input())
respostas = []
for c in range(0,t):
    k = int(input())
    lista = []
    i = 1
    #caso não saiba até onde vai o i do for loop
    #faz um while com a condição que quer
    while len(lista) != k:
        if i % 3 == 0 or str(i)[-1] == '3':
            pass
        else:
            lista.append(i)
        i += 1

    respostas.append(lista[-1])
for r in respostas:
    print(r)


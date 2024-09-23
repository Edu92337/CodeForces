t = int(input())
sub_palavras = []
palavra_nova = []
respostas = []
for x in range(0,t):
    palavra = input()
    #criei as sub palavras de comprimento 2
    for i in range(0,len(palavra),2):
        sub_palavras.append(palavra[i:i+2])

    #adicionei parte delas em uma lista menos o ultimo elemento
    for j in range(0,len(sub_palavras)-1):
        palavra_nova.append(sub_palavras[j][0])
    #adicionei o ultimo
    palavra_nova.append(sub_palavras[-1])

    #transformei a lista em string e joguei para as respostas
    resultado = ''.join(palavra_nova)
    respostas.append(resultado)

    #limpa as listas para a proxima palavra
    palavra_nova.clear()
    sub_palavras.clear()

for r in respostas:
    print(r)
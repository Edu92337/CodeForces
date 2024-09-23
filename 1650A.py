t = int(input())
respostas = []
esq_dir = []
for x in range(0,t):
    palavra = input()
    letra = input()
    if letra not in palavra:
        respostas.append('NO')
        continue

    posição = [ i for i ,x in enumerate(palavra) if x == letra]
    
    for p in posição:
        esquerda = len(palavra[0:p])
        direita = len(palavra[p:-1])
        if esquerda % 2 == 0 and direita % 2 == 0:
            esq_dir.append(esquerda)
            esq_dir.append(direita)
   
    if len(esq_dir) != 0 :
        respostas.append('YES')
    else:
        respostas.append('NO')
    esq_dir.clear()

for r in respostas:
    print(r)


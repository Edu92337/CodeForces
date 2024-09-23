em_campo = input()
contador = 0
for i in range(1,len(em_campo)):
    #se os elementos seguidos forem iguais contador +=1
    if em_campo[i] == em_campo[i-1]:
        contador += 1
    #se o numero mudar e o contador estiver menor que 6 => não achou uma sequencia de 7
    if contador < 6 and em_campo[i] != em_campo[i-1]:
        #ele volta para procurar no resto da sequencia
        contador = 0
    
if contador < 6:
    print('NO')
else:
    print('YES')

            
        
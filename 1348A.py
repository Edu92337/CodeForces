t = int(input())
peso = []
contra_peso = []
for i in range(0,t):
    numero_de_moedas = int(input())
    for j in range(0,int((numero_de_moedas/2)-1  )):
        peso.append(2**(2*j + 1))
    print(peso)



        


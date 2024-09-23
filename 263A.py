distancia = 0
linha1 = input().split()
linha1 = [i for i in linha1]
if '1' in linha1 :
    distancia = 2 + abs(linha1.index('1') - 2)
linha2 = input().split()
linha2 = [i for i in linha2]
if '1' in linha2 :
    distancia = 1 + abs(linha2.index('1') - 2)
linha3 = input().split()
linha3 = [i for i in linha3]
if '1' in linha3 :
    distancia = 0 + abs(linha3.index('1') - 2)
linha4 = input().split()
linha4 = [i for i in linha4]
if '1' in linha4 :
    distancia = 1 + abs(linha4.index('1') - 2)
linha5 = input().split()
linha5 = [i for i in linha5]
if '1' in linha5 :
    distancia = 2 + abs(linha5.index('1') - 2)

print(distancia)


  
    
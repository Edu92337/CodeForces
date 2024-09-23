t= int(input())
tempo = 0
# alfabeto = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
tempos = []
for i in range(0,t):
    alfabeto = input()
    palavra = input()
    if len(palavra) == 11:
        tempos.append(0)
    if len(palavra) != 1:
        for j in range(1,len(palavra)):
            tempo = abs(alfabeto.index(palavra[j]) - alfabeto.index(palavra[j-1])) + tempo
    tempos.append(tempo)
    tempo = 0

for t in tempos:
    print(t)



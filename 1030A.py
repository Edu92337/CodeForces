n = int(input())
respostas = input().split()
respostas = [int(i) for i in respostas]
hard = 0


for numeros in respostas:
    if numeros == 1:
        hard +=1
        break
    if numeros == 0:
        continue
if hard != 0:
    print("HARD")
if hard == 0:
    print("EASY")



t= int(input())
respostas = []
for i in range(0,t):
    a_b_c = input().split()
    a_b_c = [int(x) for x in a_b_c]

    tempo_1 = a_b_c[0] 
    tempo_2 = abs(a_b_c[1] - a_b_c[2]) + a_b_c[2]

    if tempo_1 == tempo_2:
        respostas.append(3)
    if tempo_1 > tempo_2:
        respostas.append(2)
    if tempo_1 < tempo_2:
        respostas.append(1)
for resposta in respostas:
    print(resposta)
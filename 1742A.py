t = int(input())
respostas = []
for i in range(0,t):
    a_b_c = input().split()
    a_b_c = [int(x) for x in a_b_c]
    a_b_c.sort()
    if a_b_c[2] == a_b_c[1] + a_b_c[0]:
        respostas.append("YES")
    else:
        respostas.append("NO")

for resposta in respostas:
    print(resposta)

n = int(input())
porcentagens = input().split()
porcentagens = [int(valor) for valor in porcentagens]
porcentagem_total = sum(porcentagens)/n
print(porcentagem_total)
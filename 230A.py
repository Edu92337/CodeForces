s_n = input().split()
s_n = [int(x) for x in s_n]
dragoes = {}
forças = []
tag = True

for x in range(0,s_n[1]):
    x_y = input().split()
    x_y = [int(y) for y in x_y]
    dragoes[x_y[0]] = x_y[1]

    dragoes[x_y[0]] = x_y[1]
print(dragoes)

for força in dragoes.keys():
    forças.append(força)
forças.sort()
print(forças)

for força in forças:
    if s_n[0] > força:
        s_n[0] += dragoes[força]
    else:
        tag = False

if tag == True:
    print('YES')
else:
    print('NO')
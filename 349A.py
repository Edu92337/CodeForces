n = int(input())
valores = [int(i) for i in input().split()]
n_25,n_50 = 0,0
possivel = True
for i in valores:
    if i == 25:
        n_25 += 1
    elif i == 50 :
        if n_25 < 1:
            possivel = False
            break
        else:
            n_25 -= 1
            n_50 += 1
    else:
        if n_25 >= 1 and n_50 >= 1:
            n_25 -= 1
            n_50 -= 1
        elif n_25 >=3:
            n_25-=3

        else:
            possivel = False
            break

        

print('YES'if possivel == True else 'NO')
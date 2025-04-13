t = input()
n = input().split()
cincos = len([i for i in n if i == '5'])
zeros = len([i for i in n if i == '0'])

if cincos >= 9 and zeros >= 1:
    resto = cincos % 9
    if cincos % 9 != 0 :
        cincos -= resto
num = sorted(['5']*cincos +['0']*zeros,reverse=True)


if cincos % 9 == 0 and zeros >=1:
    if cincos == 0:
        print(0)
    else:
        print(''.join(num if cincos%9 == 0 and zeros >= 1 else '0'))
else:
    if zeros >=1:
        print(0)
    else:
        print(-1)
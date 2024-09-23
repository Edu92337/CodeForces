t= int(input())
valores = []
for i in range(0,t):
    a_b_c = input().split()
    a_b_c = [int(x) for x in a_b_c]
    
    #info do circulo
    #numero de elementos no cirulo
    n = int(abs(a_b_c[1] - a_b_c[0])*2)
    d = int(a_b_c[2] + n/2)
    if a_b_c[0] > n or a_b_c[1] > n or a_b_c[2] > n:
        valores.append(-1)
    elif d > n:
        valores.append(d - n)
    else:
        valores.append(d)


for  r in valores:
    print(int(r))

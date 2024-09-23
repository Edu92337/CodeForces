import math
a_b = input().split()
a_b = [int(c) for c in a_b]
a,b = a_b[0],a_b[1]
h = a
tempo = a
chama = True
if a >= b:
    while chama == True:
        h = h/b
        tempo +=h
        if h//b == 0 :
            chama = False
    print(math.floor(tempo))
    

else:
    print(a)



t = int(input())
for _ in range(t):
    n,m,l,r = [int(i) for i in input().split()]
    movimentos = 0
    pos = [0,0]
    direita = True
    while movimentos != m :
        if pos[0] == l and pos[1] == r:
            break
        if direita == True and pos[1] <= r:
            if r != pos[1]:
                pos[1] += 1
                movimentos += 1
            direita = False
        elif direita == False and pos[0] >= l:
            if l != pos[0]:
                pos[0] -= 1
                movimentos += 1
            direita = True
        
    print(f'{pos[0]} {pos[1]}')
        


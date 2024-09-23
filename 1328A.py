t = int(input())
resp = []
for x in range(t):
    a_b = input().split()
    a_b = [int(i) for i in a_b]
    a,b = a_b[0],a_b[1]
    quociente_int = a //b
    resto = a % b
    if resto != 0:
        moves = b * (quociente_int +1) - a  # b *quociente + (b-a)
        resp.append(moves)
    else:
        resp.append(resto)
    
for r in resp:
    print(r)
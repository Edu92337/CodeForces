t = int(input())
resp = []
for x in range(t):
    a_b_c = input().split()
    a_b_c=[int(i) for i in a_b_c]
    maior = max(a_b_c)
    a,b,c=a_b_c[0],a_b_c[1],a_b_c[2]
    valores = []

    if a == maior and a>b and a > c: # se a for o maior elemento e eles forem todos diferentes
        valores.append(0)
    else:
        valores.append(maior-a+1) #EX: 2,2,1-> a=2= maior mas a=b => 1,1,2
    if b == maior and b > a and b >c :
        valores.append(0)
    else:
        valores.append(maior-b+1)
    if c == maior and c> a and c >b :
        valores.append(0)
    else:
        valores.append(maior-c+1)
    
    valores = [str(i) for i in valores]
    resp.append(' '.join(valores))

for r in resp:
    print(r)

    


    


    


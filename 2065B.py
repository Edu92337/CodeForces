n = int(input())
palavras = []
for _ in range(n):
    palavras.append(input())
for p in palavras:
    tag = False
    for i in range(len(p)-1):
        if p[i] == p[i+1]:
            tag = True
    if tag == True:
        print(1)
    else:
        print(len(p))       
    



        


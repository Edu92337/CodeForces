t = int(input())
resp=[]

for x in range(t):
    n = int(input())
    array = input().split()
    array= [int(i) for i in array]
    d ={}
    tag = False
    for i in array:
        if i not in d:
            d[i]=1
        else:
            d[i]+=1

        if d[i] >=3:#coloca a condição dentro do próprio loop
            resp.append(i)
            tag= True
            break
    if tag == False:
        resp.append(-1)
for r in resp:
    print(r)
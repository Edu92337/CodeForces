t = int(input())
resposta =[]
for x in range(0,t):
    a,b =map(int,input().split())
    delta = abs(a-b)
    #conta quantas vezes da pra subitrair 10 em delta e depois subtrai oque falta
    resposta.append(delta//10 + min(1,delta%10))
for r in resposta:
    print(r)





    

    
        


        


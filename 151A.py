valores = input().split()
valores = [int(x) for x in valores]
n,k,l,c,d,p,nl,np = valores[0],valores[1],valores[2],valores[3],valores[4],valores[5],valores[6],valores[7] 
drinks_volume = k*l//nl
drinks_pedaços_limao = d*c
drinks_sal = p/np
print(int(min(drinks_pedaços_limao,drinks_sal,drinks_volume)/n))
    
#volume total = 20//3 ->  brindes
#pedaços de limao = 15 brindes
#sal 10/1 -->10 brindes

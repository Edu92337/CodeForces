#.SPLIT() COLOCA AS VARIAVEIS NA MESMA LINHA 
k,n,w = input().split()
k = float(k)
n = float(n)
w = float(w)
#SOMA DE P.A MULTIPLICADO POR K
custo_total = int(k*(1+w)*(w)/2)

if n < custo_total:
    print(int(custo_total - n))

if n >= custo_total:
    print("0")
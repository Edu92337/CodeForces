n_a_b = input().split()
n_a_b = [int(i) for i in n_a_b]
n,a,b=n_a_b[0],n_a_b[1],n_a_b[2]

lista = [int(i) for i in range(1,n+1)]
 
if a== 0 :
    print(1)
elif b == 0:
    print(1)
else:
    print(len(lista) - min(a,b)-1)



def calcula_menor_lucro(n,vec):
    x = 0
    i = 0
    compras = 0
    while i != len(vec) and compras <= n:
        while vec[i] != 0 and compras !=n:
            x+= vec[i]
            vec[i]-=1
            compras += 1
            
        i+=1
    return x

def calcula_maior_lucro(n, vec):
    x = 0
    compras = 0
    while compras < n:
        
        max_val = max(vec)
        i = vec.index(max_val)  

        x += vec[i]
        vec[i] -= 1
        compras += 1
    return x


n,m = list(map(int,input().split()))
avioes = list(map(int,input().split()))
maior_valor = calcula_maior_lucro(n,sorted(avioes))
menor_valor = calcula_menor_lucro(n,sorted(avioes))

print(maior_valor,menor_valor)
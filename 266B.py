n_t = input().split()
n,t=int(n_t[0]),int(n_t[1])
sfila = input()
fila = [l for l in sfila]
i = 0
while True:
    pos_meninos = [int(letra) for letra in range(len(fila)) if fila[letra] == 'B']
    if i== t:
        break
    else:
        i += 1
    while True:
        for p in pos_meninos:
            if p!=len(fila) -1 and fila[p+1] == 'G':
                aux = fila[p]
                fila[p] = fila[p+1]
                fila[p+1] = aux 
        if i == t:
            print(''.join(fila))
        break
    
    
        
    
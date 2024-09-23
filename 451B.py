n = int(input())
arr = input().split()
arr = [int(c) for c in arr]
arr_ordenado = arr[:]
arr_ordenado.sort()
copia_ar_ord = arr_ordenado[:]
copia_ar_ord.reverse()
contador = 0 
if arr == arr_ordenado:
    print('yes')
    print(f'1 1')
elif arr == copia_ar_ord:
    print('yes')
    print(f'1 {len(arr)}')
else:
    for i in range(0,n):
        if arr[i] != arr_ordenado[i] and contador == 0:
            primeiro_diferente = arr.index(arr[i])
            contador +=1
        elif arr[i] != arr_ordenado[i]:
            contador +=1
    arr_teste = arr[primeiro_diferente:primeiro_diferente+contador]
    arr_teste.reverse()
    if arr_teste == arr_ordenado[primeiro_diferente:primeiro_diferente+contador]:
        print('yes')
        print(f'{primeiro_diferente+1} {primeiro_diferente+contador}')

    else:
        print('no')


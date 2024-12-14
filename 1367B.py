t = int(input())
for _ in range(t):
    moves = 0
    n = int(input())
    arr = list(map(int,input().split()))
    pares = [i for i in range(n) if arr[i] % 2 == 0 and i % 2 != 0]
    impares = [i for i in range(n) if arr[i] % 2 != 0 and i % 2 == 0]
    
    if len(pares) == len(impares):
        print(len(pares))
    else:
        print(-1)
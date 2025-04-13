t = int(input())
for _ in range(t):
    n = int(input())
    mat = []
    perm = [0]*2*n
    for _ in range(n):
        mat.append([int(i) for i in input().split()])

    for j in range(n):
        for i in range(j,n):
            perm[i+j+1] = mat[i][j]
    soma = sum(perm)
    total= n*(2*n+1)
    x = total - soma
    perm[0] = x
    print(' '.join(str(x) for x in perm))
            

    
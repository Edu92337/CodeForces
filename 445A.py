n,m = list(map(int,input().split()))
matrix = []
deslocamentos = [(-1,0),(0,-1),(1,0),(0,1)]
for _ in range(n):
    linha = [i for i in input()]
    matrix.append(linha)

for i in range(n):
    for j in range(m):
        if matrix[i][j] == '.':
            if (i + j) % 2 == 0:
                matrix[i][j] = 'W'
            else:
                matrix[i][j] = 'B'
            
for l in matrix:
    print(''.join(l))
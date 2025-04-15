def busca_sqr(mat):
    direcoes = [[(1,0),(1,1),(0,1)],
                [(-1,0),(-1,1),(0,1)],
                [(1,0),(1,-1),(0,-1)],
                [(-1,0),(-1,-1),(0,-1)]]
    for i in range(4):
        for j in range(4):
            cor = mat[i][j]
            for quadrado in direcoes:
                difs = 0
                iguais = 1
                for d in quadrado:
                    if 0<= i+d[0] < 4 and 0<= j + d[1] < 4:
                        if mat[i+d[0]][j+d[1]] != cor:
                            difs += 1
                        else:
                            iguais += 1
                if difs == 3 or iguais == 4:
                    return 'YES'
    return 'NO'
mat = []
for _ in range(4):
    mat.append([i for i in input()])
print(busca_sqr(mat))

t, sx, sy, ex, ey = map(int, input().split())
direcoes = input()
tempo = 0

for d in direcoes:
    if sx == ex and sy == ey:
        print(tempo)
        break
    if d == 'E' and sx < ex:
        sx += 1
    elif d == 'W' and sx > ex:
        sx -= 1
    elif d == 'N' and sy < ey:
        sy += 1
    elif d == 'S' and sy > ey:
        sy -= 1
    tempo += 1
else:
    if sx == ex and sy == ey:
        print(tempo)
    else:
        print(-1)

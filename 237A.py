n = int(input())
horarios = {}
for _ in range(n):
    horas_min = tuple(input().split())
    if horas_min not in horarios.keys():
        horarios[horas_min] = 1
    else:
        horarios[horas_min] += 1
print(max(horarios.values()))
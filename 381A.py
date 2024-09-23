n = int(input())
array = input().split()
array = [int(x) for x in array]
ponteiro_1 = 0
ponteiro_2 = len(array) - 1
sereja = 0
dima = 0
while ponteiro_1 < ponteiro_2 :
    sereja += max(array[ponteiro_1],array[ponteiro_2])
    if max(array[ponteiro_1],array[ponteiro_2]) == array[ponteiro_1]:
        ponteiro_1 += 1
    else:
        ponteiro_2 -= 1
    dima += max(array[ponteiro_1],array[ponteiro_2])
    if max(array[ponteiro_1],array[ponteiro_2]) == array[ponteiro_1]:
        ponteiro_1 += 1
    else:
        ponteiro_2 -= 1
    
if ponteiro_1 == ponteiro_2:
    sereja += array[ponteiro_1]


print(f'{sereja} {dima}')
    

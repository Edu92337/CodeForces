def casa_dos_pompos(vetor):
    for i in vetor:
        if vetor.count(i) > (n+1)//2:
            return False
    return True
n = int(input())
vec = [i for i in input().split()]
print('YES' if casa_dos_pompos(vec) == True else 'NO')


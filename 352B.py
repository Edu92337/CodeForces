n = int(input())
seq = list(map(int,input().split()))
posi = {}

for i in range(n):
    if seq[i] not in posi:
        posi[seq[i]] = [0,i] # delta e ultima posição
    else:
        if posi[seq[i]][0] != 0:
            if posi[seq[i]][1] != -1:
                if i - posi[seq[i]][1] == posi[seq[i]][0]:
                    posi[seq[i]][1] = i
                else:
                    posi[seq[i]][1] = -1
        else:
            posi[seq[i]][0] = i - posi[seq[i]][1]
            posi[seq[i]][1] = i

    

l = [(k,v[0]) for k,v in posi.items() if v[1] != -1]
l.sort()
print(len(l))
for i in range(len(l)):
    print(l[i][0],l[i][1])
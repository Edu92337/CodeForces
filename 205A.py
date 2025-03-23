n = int(input())
tempos = list(map(int,input().split()))
dic = {}
for t in tempos:
    if t not in dic:
        dic[t] = 1
    else:
        dic[t] += 1
menor_tempo = min(dic.keys())
if dic[menor_tempo] != 1:
    print('Still Rozdil')
else:
    print(tempos.index(menor_tempo)+1)    
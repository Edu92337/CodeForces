t = int(input())
resp = []
for x in range(t):
    p=0
    i = 0
    n = int(input())
    seq = input().split()
    seq = [int(i) for i in seq]
    for j in seq:
        if j %2 ==0:
            p += 1
        else:
            i+=1
    if i == p:
        resp.append('Yes')
    else:
        resp.append('No')
for r in resp:
    print(r)
n_k = input().split()
n,k = int(n_k[0]),int(n_k[1])
seq = input().split()
seq = [int(i) for i in seq]
seq.sort()
if k < n:
    x = seq[k]-1
    c = 0
    for i in range(n):
        if seq[i] <= x:
            c+=1
            if c == k:
                break
    if c!=k:
        print(-1)
    else:
        if x == 0 :
            print(-1)
        elif x > 10**9:
            print(-1)
        else:
            print(x)
else:
    if 1<=seq[k-1] <= 10**9:
        print(seq[k-1])
    else:
        print(-1)
    


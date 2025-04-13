def prefix_sum(vec):
    sum_pref = [0]*(len(vec)+1)
    for i in range(len(vec)):
        sum_pref[i+1] = sum_pref[i] + vec[i] 
    return sum_pref

n = int(input())
v = [int(i) for i in input().split()]
q = int(input())
soma_normal = prefix_sum(v)
soma_min = prefix_sum(sorted(v))
for _ in range(q):
    t,l,r = [int(i) for i in input().split()]
    if t == 1:
        print(soma_normal[r]-soma_normal[l-1])
    else:
        print(soma_min[r]-soma_min[l-1])



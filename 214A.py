n,m = list(map(int,input().split()))
count = 0
for b in range(0,n+1):
    for a in range(0,m+1):
        if a**2 + b == n and a + b**2 == m:
            count += 1
print(count)
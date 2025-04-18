x,y = [int(u) for u in input().split()]
n = int(input())
f = {1:x,
     2:y,
     3:y-x,
     4:-x,
     5:-y,
     6:x-y,
     7:x,
     8:y,
     }
if n%6 != 0:
    print(f[n%6]%1000000007)
else:
    print(f[6]%1000000007)

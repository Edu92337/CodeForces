import math
a1,a2,a3 = list(map(int,input().split()))
y = int(math.sqrt(a3*a1/a2))
z = int(a2*y/a1)
x = int(a1/y)
print(4*(x+y+z))
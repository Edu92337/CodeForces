n_m = input().split()
n_m = [ int(c) for c in n_m]
n,m = n_m[0],n_m[1]
colorido = False
for i in range(0,n):
    pixels = input().split()
    if 'C' in pixels or 'M' in pixels or 'Y' in pixels:
        colorido = True
        break
    else:
        colorido = False
if colorido == True:
    print('#Color')
else:
    print('#Black&White')

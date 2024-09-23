n = int(input())

if n % 2 == 0 :
    delta = n/2
    print(int(delta))
if n % 2 != 0:
    delta = int(-(n+1)/2)
    print(delta)
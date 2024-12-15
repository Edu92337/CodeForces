t = int(input())
for _ in range(t):
    n = int(input())
    counter = 0
    a = 1
    while n-a>0:
        counter += 1
        a += 1
    print(counter)


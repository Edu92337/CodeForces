t = int(input())
for _ in range(t):
    palavra = input().split()
    name = ''
    for p in palavra:
        name += p[0]
    print(name)

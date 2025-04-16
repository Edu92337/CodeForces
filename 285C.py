n = int(input())
a = [int(i) for i in input().split()]
a.sort()
seq = [i for i in range(1,n+1)]
moves = 0
for i in range(n):
    moves += abs(seq[i] - a[i])
print(moves)

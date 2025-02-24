from collections import Counter

n = int(input())
flores = list(map(int, input().split()))
min_beauty = min(flores)
max_beauty = max(flores)
max_diff = max_beauty - min_beauty


count_min = flores.count(min_beauty)
count_max = flores.count(max_beauty)

if min_beauty == max_beauty:

    ways = count_min * (count_min - 1) // 2
else:
    ways = count_min * count_max

print(max_diff, ways)

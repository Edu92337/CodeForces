n = int(input())
array = input().split()
array = [int(x) for x in array]
array.sort()
array = [str(x) for x in array]
print(' '.join(array))
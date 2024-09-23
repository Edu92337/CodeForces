n = int(input())
array = input().split()
array = [int(x)/100 for x in array]

print(sum(array)/n*100)
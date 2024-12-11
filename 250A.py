n = int(input())
arr = input().split()
arr = [int(i) for i in arr]
l = 0
n = len(arr)
max_comp = 0
if n == 1:
    print(n)
else:
    for r in range(1,n):
        if arr[r]<arr[r-1]:
            max_comp = max(max_comp,r-l)
            l = r
    max_comp = max(max_comp,r-l+1)
    print(max_comp)
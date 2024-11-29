def bs(arr,ele):
    l=0
    r = len(arr)-1
    tag = False
    while l<=r:
        mid = (l+r)//2
        if arr[mid] == ele:
            tag = True
            break
        elif arr[mid] < ele:
            l = mid + 1
        elif arr[mid] > ele:
            r = mid -1
    if tag == True:
        print("YES")
    else:
        print("NO")


n_k = input().split()
n,k = int(n_k[0]),int(n_k[1])
arr = input().split()
arr = [int(i) for i in arr]
nums = input().split()
nums =[int(i) for i in nums]
for i in nums:
    bs(arr,i)

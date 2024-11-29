def busca_max_index(lista,elemento):
    l,r=0,len(lista)-1
    max_index = 0
    tag = False
    while l<=r:
        mid = (l+r)//2
        if lista[mid] > elemento:
            r = mid -1
        elif lista[mid] <= elemento:
            tag = True 
            max_index = max(max_index,mid)
            l=mid +1 
    if tag == False:
        return 0
    else:
        return max_index + 1
n_k = input().split()
n,k = int(n_k[0]),int(n_k[1])
arr = input().split()
arr = [int(i) for i in arr]
nums = input().split()
nums = [int(i) for i in nums]
for i in nums:
    k = busca_max_index(arr,i)
    print(k)

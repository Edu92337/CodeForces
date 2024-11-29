def busca_min_index(lista,elemento):
    l,r=0,len(lista)-1
    min_index = float('inf')
    tag = False
    while l<=r:
        mid = (l+r)//2
        if lista[mid] >= elemento:
            tag = True 
            min_index = min(min_index,mid)
            r = mid - 1
        elif lista[mid] < elemento:
            l=mid + 1 
    if tag == False:
        return len(lista) + 1
    else:
        return min_index + 1
n_k = input().split()
n,k = int(n_k[0]),int(n_k[1])
arr = input().split()
arr = [int(i) for i in arr]
nums = input().split()
nums = [int(i) for i in nums]
for i in nums:
    print(busca_min_index(arr,i))

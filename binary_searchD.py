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
n = int(input())
arr = input().split()
arr = [int(i) for i in arr]
arr.sort()
k = int(input())
nums = []
for _ in range(k):
    par = input().split()
    menor,maior = int(par[0]),int(par[1])
    maior_index = busca_max_index(arr,maior)
    menor_index = busca_min_index(arr,menor)
    nums.append((maior_index-menor_index)+1)
nums = [str(i) for i in nums]
print(' '.join(nums))
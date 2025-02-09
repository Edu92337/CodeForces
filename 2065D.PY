def prefix_sum(arr):
    n = len(arr)
    prefix_sum_arr = [0] * (n + 1)  # cria o vetor de prefix sums com tamanho n+1
    
    for i in range(1, n + 1):  # começa de 1 porque prefix_sum[0] é 0
        prefix_sum_arr[i] = prefix_sum_arr[i - 1] + arr[i - 1]
    
    return prefix_sum_arr

t = int(input())
for _ in range(t):
    n,m = list(map(int,input().split()))
    vec = []
    for _ in range(n):
        vec.append(list(map(int,input().split())))
    vec.sort(key = lambda x: -sum(x))
    vec = [elem for sublist in vec for elem in sublist]
    print(sum(prefix_sum(vec)))
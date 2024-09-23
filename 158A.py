n_k = input().split()
n,k = int(n_k[0]),int(n_k[1])
seq = input().split()
seq = [int(i) for i in seq]
valor = seq[k-1]
print(len([i for i in seq if i >=valor and i > 0]))
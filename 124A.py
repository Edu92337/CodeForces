n,a,b = [int(i) for i in input().split()]
intervalo1 = a + 1
intervalo2 = n - b
print(n - max(intervalo1,intervalo2)+1)
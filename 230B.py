import math

def crivo(limit):
    is_prime = [True] * (limit + 1)
    is_prime[0] = is_prime[1] = False
    for i in range(2, int(math.sqrt(limit)) + 1):
        if is_prime[i]:
            for j in range(i * i, limit + 1, i):
                is_prime[j] = False
    return is_prime

def t_prime(n, primes):
    raiz = int(math.sqrt(n))
    if raiz * raiz == n and primes[raiz]:
        return 'YES'
    return 'NO'


n = int(input())
arr = list(map(int, input().split()))
max_val = max(arr)

prime_limit = int(math.sqrt(max_val)) + 1
primes = crivo(prime_limit)

for num in arr:
    print(t_prime(num, primes))

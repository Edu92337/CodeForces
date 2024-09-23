array =input().split()
array = [int(x) for x in array]
n,m,a,b = array[0],array[1],array[2],array[3]
valor_1 = n*a
valor_2 = (n//m)*b + abs((n - m*(n//m)))*a
valor_3 = b*((n//m)+1)
print(min(valor_1,valor_2,valor_3))


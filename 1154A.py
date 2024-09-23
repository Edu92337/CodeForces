array = input().split()
array = [int(x) for x in array]
array.sort()
x1,x2,x3 = array[0],array[1],array[2]
b = int((x3+x1-x2)/2)
a = x1 - b
c = x3 - b
print(f'{a} {b} {c}')
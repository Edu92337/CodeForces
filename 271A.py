def dif(n):
    digits = {}
    for i in str(n):
        if i not in digits:
            digits[i] = 0
    if len(digits.keys()) == len(str(n)):
        return True
    else:
        return False

num = int(input())
num +=1
while dif(num)== False:
    num +=1
print(num)

        


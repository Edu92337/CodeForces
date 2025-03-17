s1 = input().split()
dic = {}
for i in s1:
    for j in i:
        if j not in dic:
            dic[j] = 1
        else:
            dic[j] += 1
s3 = input().split()
tag = True
for palavra in s3:
    for letra in palavra:
        if letra not in dic.keys():
            tag = False
        elif dic[letra] != 0:
            dic[letra] -= 1
        else:
            tag = False
if tag == True:
    print('YES')
else:
    print('NO')
t = int(input())
respostas = []
for x in range(0,t):
    array = input().split()
    array = [int(x) for x in array]
    s1 = array[0] + array[1]
    s2 = array[0] + array[2]
    s3 = array[1] + array[2]

    if s1>=10 or s2>=10 or s3 >=10 :
        respostas.append('YES')
    else:
        respostas.append('NO')
    



for r in respostas:
    print(r)

        


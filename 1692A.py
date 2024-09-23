
t = int(input())
respostas =[]
    a_b_c_d = input().split()
    a_b_c_d = [int(x) for x in a_b_c_d]
    # a,b,c,d = a_b_c_d[0],a_b_c_d[1],a_b_c_d[2],a_b_c_d[3]
    a = a_b_c_d[0]
    a_b_c_d.sort()
    respostas.append(len(a_b_c_d[a_b_c_d.index(a):])-1)
for r in respostas:
    print(r)





n = input()
n3 = 0
if int(n) < 0:
    #numero sem o ultimo digito
    n1 = n[0:-1]
    #numero tirando o penultimo digito e juntnado com o ultimo digito
    n2 = n[0:-2] + n[-1]
    if n2 == '-0':
        n2 = 0
        print(n2)
    else:
        #o menor valor dos dois
        print(min(n1,n2))
else:
    print(n)

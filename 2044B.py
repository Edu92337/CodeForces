t = int(input())
for _ in range(t):
    palavra= input()
    string =[ l for l in palavra]
    for i in range(len(string)):
        if string[i] == 'p':
            string[i] = 'q'
        elif string[i] ==  'q':
            string[i] = 'p'
    string.reverse()
    print(''.join(string))
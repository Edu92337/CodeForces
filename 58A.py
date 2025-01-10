def hello_in_word(string):
    hello = ''
    for i in range(len(string)):
        if string[i]=='h' and len(hello) == 0 :
            hello += string[i]
        elif string[i] == 'e' and len(hello)!= 0 and hello[-1] =='h' :
            hello += string[i]
        elif string[i] == 'l' and len(hello)!= 0 and (hello[-1] == 'e' or hello[-1] =='l') and hello.count('l')<=1  :
            hello += string[i]
        elif string[i] == 'o' and len(hello)!= 0 and hello[-1] == 'l' and hello.count('l') == 2  :
            hello += string[i]
         
    return hello == 'hello'

palavra = input()
if hello_in_word(palavra) == True:
    print('YES')
else:
    print('NO')  

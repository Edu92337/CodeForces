palavra = input()
comandos =['H','Q','9']
tag = False
palavra = [i for i in palavra]
for letra in palavra:
    if letra in comandos:
        tag = True
if tag == True:
    print('YES')
else:
    print('NO')
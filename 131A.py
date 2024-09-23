palavra = input()
if len(palavra )>1:
    if palavra[1:].isupper() == True:
        print(palavra[0].upper()+palavra[1:].lower())
    elif palavra[:].isupper() == True:
        print(palavra.lower())
    else:
        print(palavra)
else:
    if palavra.isupper() == True:
        print(palavra.lower())
    else:
        print(palavra.upper())
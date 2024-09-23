palavra = input()
if palavra.isupper()== True:#caso 1
    print(palavra.lower())

elif palavra[0].isupper() == False and palavra[1:].isupper()==True: #primeira minuscula e o resto maiuscula
    print(palavra[0].upper() + palavra[1:].lower())

elif palavra[0].islower() == True and len(palavra)==1:
    print(palavra.upper())


else:
    print(palavra)

nome = input()
letras_do_nome = []

for letra in nome :
    letras_do_nome.append(letra)
    if letras_do_nome.count(letra) > 1:
        letras_do_nome.remove(letra)
        
#condição de mulher

if len(letras_do_nome) % 2 == 0 :
    print("CHAT WITH HER!")
    #condição de homem
if len(letras_do_nome) % 2 != 0:
    print("IGNORE HIM!")


numero = input()
l_sorte = []

for algarismo in numero:
    if algarismo == "4" or algarismo == "7":
        l_sorte.append(algarismo)

if len(l_sorte) == 4 or len(l_sorte) == 7:
    print("YES")
else:
    print("NO")
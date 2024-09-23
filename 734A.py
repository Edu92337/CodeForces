n = int(input())
jogos = str(input())

anton = jogos.count("A")
danik = jogos.count("D")

if anton > danik:
    print("Anton")
if anton < danik:
    print("Danik")

if anton == danik:
    print("Friendship")

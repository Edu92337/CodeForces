t = int(input())
tempos = []
for x in range(0,t):
    h_m = input().split()
    h_m = [int(i) for i in h_m]
    tempo = 1440 - 60*h_m[0] -h_m[1]
    tempos.append(tempo)
for tempo in tempos:
    print(tempo)

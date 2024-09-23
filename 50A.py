import math
m_n = input().split()
m_n = [ int(i) for i in m_n]
area_totall = m_n[0]*m_n[1]
area_domino = 2
numero_dominos = math.floor(area_totall/area_domino)
print(numero_dominos)
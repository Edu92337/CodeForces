n = int(input())
pontos = 0
for c in range(0,n):
    m_c = input().split()
    m_c = [int(x) for x in m_c]
    m,c = m_c[0],m_c[1]
    if m > c :
        pontos += 1
    elif m < c :
        pontos -= 1

if pontos > 0 :
    print('Mishka')
elif pontos < 0:
    print('Chris')
else:
    print('Friendship is magic!^^')



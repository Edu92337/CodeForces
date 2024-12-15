t = int(input())
for _ in range(t):
    m_a_b_c = input().split()
    m,a,b,c = int(m_a_b_c[0]),int(m_a_b_c[1]),int(m_a_b_c[2]),int(m_a_b_c[3])
    macacos = 0
    lugares = m*2
    if a>=m:
        macacos += m
        lugares -= m
    else:
        macacos += a
        lugares -= a
    if b >= m:
        macacos += m
        lugares -= m
    else:
        macacos += b
        lugares -= b
    if lugares > 0:
        if c >= lugares:
            macacos += lugares
        else:
            macacos += c
    print(macacos)
    

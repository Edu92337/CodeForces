def unicos(sequencia):
    sequencia=[i for i in sequencia if i.isalpha()==True]
    sequencia = set(sequencia)
    return len(sequencia)
print(unicos(input()))
def caps(palavra):
    maiusculas = 0
    for l in palavra:
        if l.isupper():
            maiusculas +=1
    if maiusculas >len(palavra)/2:
        palavra=palavra.upper()
    else:
        palavra=palavra.lower()
    return palavra

print(caps(input()))
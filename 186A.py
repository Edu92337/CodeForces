def same_race(gen1,gen2):
    
    gen1 = [i for i in gen1]
    gen2 = [i for i in gen2]
    if len(gen1) != len(gen2):
        return 'NO'
    dif = [i for i,k in enumerate(gen1) if gen1[i] != gen2[i]]
    if len(dif) == 2:
        aux = gen1[dif[1]]
        gen1[dif[1]] = gen1[dif[0]]
        gen1[dif[0]] = aux
        if gen1 == gen2:
            return 'YES'
        else:
            return 'NO'
    else:
        return 'NO'

gen1 = input()
gen2 = input()
print(same_race(gen1,gen2))
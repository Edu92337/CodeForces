def verifica(dic):
    for k in dic:
        if len(dic[k]) % 2 != 0:
            return False
    return True

def processar_e_escrever_saida(n, a):
    pares = {}
    if len(a) != 2 * n:
        print(-1)
    else:
        for i in range(2 * n):
            if a[i] not in pares:
                pares[a[i]] = [i + 1]
            else:
                pares[a[i]].append(i + 1)
        
        if verifica(pares) == False:
            print(-1)
        else:
            for k in pares:
                for i in range(0, len(pares[k]), 2):
                    print(pares[k][i], pares[k][i + 1])

def ler_entrada_arquivo():
    with open("input.txt", "r") as f:
        n = int(f.readline().strip())
        a = f.readline().strip().split()
    return n, a

if __name__ == "__main__":
    n, a = ler_entrada_arquivo()
    with open("output.txt", "w") as f:
        import sys
        sys.stdout = f
        processar_e_escrever_saida(n, a)

n =int(input())
valores = []
times = {}
#lista das quantidades de vezzes que cada time aparece
for x in range(0,n):
    time = input()
    valores.append(time)
#para cada time em valores,criei uma chave [time] que volta a quantidade
#que o time aparece em valores
for time in valores:
    times[time] = valores.count(time)
#maior ponto
maior_ponto = max(times.values())
#time com maior ponto
#loopei pela dicionario atras do maior valor e pritei a sua chave
for chave,valor in times.items():
    if valor == maior_ponto:
        print(chave)

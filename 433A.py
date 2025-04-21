from collections import Counter
n = int(input())
macas = [i for i in input().split()]
dic_macas = Counter(macas)
total = 2*dic_macas['200'] + dic_macas['100']
if dic_macas['100'] == 0 and dic_macas['200'] % 2 == 0:
    print('YES')
elif dic_macas['200'] == 0 and dic_macas['100'] % 2 == 0:
    print('YES')
elif total % 2 == 0 and dic_macas['100'] != 0 and dic_macas['200'] != 0:
    print('YES')
else:
    print('NO')


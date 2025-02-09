n = int(input())
s = [i for i in input()]

def solve(s,n):
    freq = {}
    for char in s:
        freq[char] = freq.get(char, 0) + 1

    for char in freq:
        if freq[char] % n != 0:
            return -1
   
    nova = ''
    for char in sorted(freq.keys()):  
        nova += char * (freq[char] // n)
    return nova*n
print(solve(s,n))


    


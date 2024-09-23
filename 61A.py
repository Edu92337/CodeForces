num1 = input()
num2 = input()
l_num1 = []
l_num2  = []
num_novo=[]
for algarismo in num1:
    l_num1.append(algarismo)
for algarismo in num2:
    l_num2.append(algarismo)

for i in range (0,len(num1)):
    if l_num1[i]==l_num2[i]:
        num_novo.append("0")
    if l_num1[i] != l_num2[i]:
        num_novo.append("1")

print("".join(num_novo))
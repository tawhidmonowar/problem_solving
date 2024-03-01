str_1 = input()
str_2 = input()

matched = 0

for i in range(len(str_1)):
    if(str_1[i]==str_2[i]):
        matched+=1

mismatched = len(str_1)-matched
print(mismatched)
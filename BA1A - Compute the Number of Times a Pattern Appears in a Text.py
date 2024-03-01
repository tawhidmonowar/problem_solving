text = input()
pattern = input()
output=0

for i in range(len(text)-len(pattern)+1):
    temp = text[i:i+len(pattern)]
    if(temp==pattern):
        output+=1

print(output)
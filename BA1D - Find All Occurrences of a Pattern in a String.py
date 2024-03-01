pattern = input()
text = input()

for i in range(len(text)-len(pattern)+1):
    temp = text[i:i+len(pattern)]
    if(temp==pattern):
        print(i)

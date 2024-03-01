text = input()
pattern = input()

for i in range(len(text)-len(pattern)+1):
    temp = text[i:i+len(pattern)]
    if(temp==pattern):
        print(i+1)

text = input()
k = int(input())
l = int(input())
t = int(input())

sub_string_map = {}

for j in range(len(text)-k+1):
    temp = text[j:j+k]
    if(temp in sub_string_map):
        sub_string_map[temp]+=1
    else:
        sub_string_map[temp]=1

for key,value in sub_string_map.items():
    if(value==t):
        print(key)

#print(sub_string_map)
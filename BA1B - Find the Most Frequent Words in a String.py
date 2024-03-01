text = input()
k_mer = int(input())
substr_map={}

for i in range(len(text)-k_mer+1):
    temp = text[i:i+k_mer]

    if(temp in substr_map):
        substr_map[temp]+=1
    else:
        substr_map[temp]=1

max_value = max(substr_map.values())

for key, value in substr_map.items():
    if(value==max_value):
        print(key)

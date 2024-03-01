text = input()
out=""

for i in text:
    if(i=='A'):
        out +='T'
    elif (i=='T'):
        out +='A'
    elif (i=='G'):
        out +='C'
    else:
        out+='G'

print("Output:\n")
print(out[::-1])
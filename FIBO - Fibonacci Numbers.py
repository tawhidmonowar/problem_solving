def fibo(n):
    temp_1 = 0
    temp_2 = 1 
    
    for i in range(2,n+1):
        temp_3 = temp_1+temp_2
        temp_1=temp_2
        temp_2=temp_3

    return temp_3

n = int(input())
print(fibo(n))

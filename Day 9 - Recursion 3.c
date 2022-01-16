#include <stdio.h>

int factorial(int x);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));

    return 0;
}

int factorial(int x)
{
    int total=0;
    if(x==0)
    {
        return 1;
    }else
    {
        total += x*factorial(x-1);
    }
    return total;
}

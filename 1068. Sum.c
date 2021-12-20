#include <stdio.h>
int main()
{
    int i,n,result=0;
    scanf("%d",&n);

    if(n>0)
    {
        result = n*(n+1)/2;
    }
    else if(n<0)
    {
        result = (1+n*(1-n)/2);
    }

    printf("%d",result);

    return 0;
}

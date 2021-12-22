#include <stdio.h>

int main()
{
    int i,n,result=0;
    scanf("%d",&n);

    if(n>0)
    {
        for(i=1; i<=n; i++)
        {
            result+=i;
        }
    }
    else if(n<=0)
    {
        for(i=1; i>=n; i--)
        {
            result+=i;
        }
    }

    printf("%d",result);

    return 0;
}
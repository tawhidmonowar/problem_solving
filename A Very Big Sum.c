#include <stdio.h>

int main ()
{
    long long int mainArray[100],result=0;
    int i,n;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%lld",&mainArray[i]);
        result+=mainArray[i];
    }

    printf("%lld",result);

    return 0;
}

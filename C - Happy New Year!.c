#include<stdio.h>

int main()
{
    long long int a[100000],n,i;

    scanf("%lld",&n);

    for(i=0; n>0; i++)
    {
        a[i]=n%2;
        n=n/2;
    }

    for(i=i-1; i>=0; i--)
    {
        if(a[i]==1)
        {
            printf("%lld",a[i]+1);
        }else
        {
            printf("%lld",a[i]);
        }

    }
    return 0;
}

#include<stdio.h>
int main()
{

   long long int  n,r;
    scanf("%lld",&n);

   if(n%2==0)
    {
       r=n/2;
        printf("%lld\n",r);
    }
    else if(n%2==1)
    {
     r=-((n+1)/2);
     printf("%lld\n",r);

    }
}

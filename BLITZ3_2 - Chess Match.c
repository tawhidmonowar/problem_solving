#include<stdio.h>

int main()
{
    int i,t,r,n,a,b,x,y;

    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%d%d%d",&n,&a,&b);
        x=2*(180+n);
        y=a+b;
        r=x-y;

        printf("%d\n",r);
    }

    return 0;
}
#include<stdio.h>

int main()
{
    int r,b,x,d,s;
    scanf("%d%d",&r,&b);

    if(r>b)
    {
        s=b;
        x=r-b;
        d=x/2;
    }
    else
    {
        s=r;
        x=b-r;
        d=x/2;
    }

    printf("%d %d\n",s,d);
}

#include <stdio.h>

int main()
{
    int i,t,a,b,x,y,w;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&x);
        w=b-a;
        y=w/x;
        printf("%d\n",y);
    }

    return 0;
}

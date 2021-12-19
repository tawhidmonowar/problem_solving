#include <stdio.h>

int main ()
{
    int a,b,c,v,w,x,y,z;
    scanf("%d%d%d",&a,&b,&c);

    v=a+b+c;
    w=a+b*c;
    x=a*(b+c);
    y=a*b*c;
    z=(a+b)*c;

    if(v>=w&&v>=x&&v>=y&&v>=z)
    {
        printf("%d",v);
    }
    else if(w>=v&&w>=x&&w>=y&&w>=z)
    {
        printf("%d",w);
    }else if (x>=v&&x>=w&&x>=y&&x>=z)
    {
        printf("%d",x);
    }else if(y>=v&&y>=w&&y>=x&&y>=z)
    {
        printf("%d",y);
    }else{
        printf("%d",z);
    }

    return 0;
}

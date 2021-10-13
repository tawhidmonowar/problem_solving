#include <stdio.h>

int main()
{
    int x,r;
    scanf("%d",&x);

    r=x/5;

    if(x%5>=1)
    {
        r++;
    }
    printf("%d",r);
    return 0;
}

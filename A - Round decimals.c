#include <stdio.h>

int main()
{
    float x;
    int y;

    scanf("%f",&x);
    y=x;

    if(y+0.5<=x)
    {
        printf("%d",y+1);
    }else
    {
        printf("%d",y);
    }

    return 0;
}

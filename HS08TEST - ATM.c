#include <stdio.h>

int main()
{
    float x,y;
    scanf("%f%f",&x,&y);

    if((int)x%5==0&&x+0.5<=y)
    {
        printf("%.2f",y-(x+0.5));
    }else
    {
        printf("%.2f",y);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int i,x,e=0,h=0,n;
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        scanf("%d",&n);
         if(n==0)
         {
             e++;
         }else
         {
             h++;
         }
    }

    if(h>=1)
    {
        printf("HARD");
    }else
    {
        printf("EASY");
    }

    return 0;
}

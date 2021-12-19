#include <stdio.h>

int main()
{
    int i,n,r=0,m=0,c=0;
    int arrM[100],arrC[100];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
       scanf("%d",&arrM[i]);
       scanf("%d",&arrC[i]);
    }

    for(i=0;i<n;i++)
    {
       if(arrM[i]>arrC[i])
       {
           m++;
       }else if(arrM[i]<arrC[i])
       {
           c++;
       }
    }

    if(m>c)
    {
        printf("Mishka");
    }else if(c>m)
    {
        printf("Chris");
    }else if(m==c)
    {
        printf("Friendship is magic!^^");
    }

    return 0;
}

#include<stdio.h>

int main()
{
    int i,n,key,temp;
    scanf("%d%d",&n,&key);
    int heigth[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&heigth[i]);
    }

    temp=heigth[0];

    for(i=0;i<n;i++)
    {
        if(temp<heigth[i])
        {
            temp=heigth[i];
        }
    }

    if(key>temp)
    {
        printf("0");
    }else
    {
        printf("%d",temp-key);
    }

    return 0;
}

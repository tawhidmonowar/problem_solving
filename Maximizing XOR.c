#include <stdio.h>

int main()
{
    int i,j,l,r,temp=0;
    scanf("%d%d",&l,&r);


    for(i=l; i<=r; i++)
    {
        for(j=i; j<=r; j++)
        {
            if((i^j)>temp)
            {
                temp=i^j;
            }
        }
    }

    printf("%d\n",temp);

    return 0;
}


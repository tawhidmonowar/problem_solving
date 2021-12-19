#include <stdio.h>

int main()
{
    int i,n,h,f[1000],r=0;

    scanf("%d%d",&n,&h);

    for(i=0; i<n; i++)
    {
        scanf("%d",&f[i]);
    }

    for(i=0; i<n; i++)
    {
        if(f[i]>h)
        {
            r+=2;
        }else
        {
            r++;
        }
    }

    printf("%d",r);

    return 0;
}

#include <stdio.h>

int main()
{
    int n,i,x,y,z,r=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&x,&y,&z);

        if(x!=0 && y!=0 || x!=0 && z!=0 || y!=0 && z!=0)
        {
            r+=1;
        }
    }

    printf("%d",r);

    return 0;
}

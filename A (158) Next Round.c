#include <stdio.h>

int main()
{
    int i,n,k,result=0;
    scanf("%d%d",&n,&k);
    int x[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0;i<n;i++)
    {
        if(x[i]>=x[k-1] && x[i]>0)
        {
            result++;
        }
    }

    printf("%d\n",result);

    return 0;
}

#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int x[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        printf("%d ",x[i]);
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);

    int sum[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&sum[i]);
        s=s+sum[i];
    }

    printf("%d",s);

    return 0;
}
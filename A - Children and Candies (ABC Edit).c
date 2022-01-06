#include<stdio.h>

int main()
{
    int i,n,total=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        total+=i;
    }

    printf("%d\n",total);

    return 0;
}

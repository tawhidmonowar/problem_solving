#include<stdio.h>

int main()
{
    int i,n,k,result=0,testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
    scanf("%d%d",&n,&k);
    int h[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&h[i]);
    }

    for(i=0;i<n;i++)
    {
        if(h[i]>k)
        {
            result++;
        }
    }

    printf("%d\n",result);
    result=0;
    }

    return 0;
}

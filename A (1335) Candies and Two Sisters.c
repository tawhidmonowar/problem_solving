#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int n,total=0;
        scanf("%d",&n);
        total = (n-1)-(n/2);
        printf("%d\n",total);
    }

    return 0;
}

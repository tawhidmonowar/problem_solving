#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int k;
        scanf("%d",&k);
        int x = 52%k;
        printf("%d\n",x);
    }

    return 0;
}

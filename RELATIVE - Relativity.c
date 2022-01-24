#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int c,g,x;
        scanf("%d%d",&g,&c);
        x=((c*c)/(2*g));
        printf("%d\n",x);
    }

    return 0;
}

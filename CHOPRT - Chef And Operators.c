#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int a,b;
        scanf("%d%d",&a,&b);

        if(a>b)
        {
            printf(">\n");
        }else if (b>a)
        {
            printf("<\n");
        }else
        {
            printf("=\n");
        }
    }

    return 0;
}

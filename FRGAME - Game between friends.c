#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);

        if(a>=b)
        {
            b=b+c;
        }
        else if(b>a)
        {
            a=a+c;
        }

        if(a>=b)
        {
            b=b+d;
        }
        else if(b>a)
        {
            a=a+d;
        }

        if(a>=b)
        {
            printf("N\n");
        }
        else
        {
            printf("S\n");
        }
    }
    return 0;
}

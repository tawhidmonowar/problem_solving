#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        int n,a,x;
        scanf("%d%d",&n,&a);
        x=n-a;

        if(x>a)
        {
            printf("%d\n",a);
        }
        else
        {
            printf("%d\n",x);
        }
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        int a,b,c;

        a=x-z;
        b=y-z;

        if(abs(a)<abs(b))
        {
            printf("Cat A\n");
        }
        else if(abs(a)>abs(b))
        {
            printf("Cat B\n");
        }
        else
        {
            printf("Mouse C\n");
        }
    }
    return 0;
}

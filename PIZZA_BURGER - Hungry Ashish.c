#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);

        if(x>=y)
        {
            printf("PIZZA\n");
        }
        else if (x>=z)
        {
            printf("BURGER\n");
        }
        else
        {
            printf("NOTHING\n");
        }
    }

    return 0;
}

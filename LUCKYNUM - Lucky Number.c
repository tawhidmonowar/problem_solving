#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int yes=0,n[100],i;
        for(i=0;i<3;i++)
        {
            scanf("%d",&n[i]);
        }

        for(i=0;i<3;i++)
        {
            if(n[i]==7)
            {
                yes++;
            }
        }

        if(yes>0)
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {

        int i,n,k;
        scanf("%d%d",&n,&k);
        int x[n];

        for(i=0; i<n; i++)
        {
            scanf("%d",&x[i]);
        }

        int y=0;

        for(i=0; i<n; i++)
        {
            if(x[i]<=0)
            {
                y++;
            }
        }

        if(y>=k)
        {
             printf("NO\n");
        }
        else
        {
           
            printf("YES\n");
        }
    }

    return 0;
}


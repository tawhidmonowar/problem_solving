#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int i,n,heigth=1;
        scanf("%d",&n);

        for(i=1; i<=n; i++)
        {
            if(i%2)
            {
                heigth*=2;
            }
            else
            {
                heigth+=1;
            }
        }

        printf("%d\n",heigth);
    }

    return 0;
}


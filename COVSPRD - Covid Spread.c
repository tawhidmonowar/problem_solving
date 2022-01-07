#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int i,n,d,infectedPeople=1;
        scanf("%d%d",&n,&d);

        for(i=1; i<=d; i++)
        {
            if(i<=10)
            {
                infectedPeople*=2;
            }
            else
            {
                infectedPeople*=3;
            }

            if(infectedPeople>=n)
            {
                infectedPeople=n;
                break;
            }
        }

         printf("%d\n",infectedPeople);
    }

    return 0;
}

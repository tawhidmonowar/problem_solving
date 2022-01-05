#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int n,m,totalRow,totalSeat;
        scanf("%d%d",&n,&m);

        if((n%2)==0)
        {
            totalRow=n/2;
        }else
        {
            totalRow=(n/2)+1;
        }


        if((m%2)==0)
        {
            totalSeat=m/2;
        }else
        {
            totalSeat=(m/2)+1;
        }

        printf("%d\n",totalSeat*totalRow);

    }
    return 0;
}



#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        int i,j,a,n,total=0,totalCount=0,temp;
        scanf("%d%d",&a,&n);
        int x[a];

        for(i=0; i<a; i++)
        {
            scanf("%d",&x[i]);
        }

        for(i=0; i<=a-1; i++)
        {
            for(j=i; j>0&& x[j-1]> x[j]; j--)
            {
                temp  = x[j];
                x[j] = x[j-1];
                x[j-1] = temp;
            }
        }

        for(i=a-1; i>=0; i--)
        {
            if(total<n)
            {
                total+=x[i];
                totalCount++;
            }
            else
            {
                break;
            }
        }

        if(total<n)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",totalCount);
        }
    }
    return 0;
}

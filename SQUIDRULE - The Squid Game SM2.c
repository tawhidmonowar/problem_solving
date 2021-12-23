#include<stdio.h>

int main()
{
    int i,j,n,temp=0,sum=0,result,testCase;

    scanf("%d",&testCase);

    while(testCase--)
    {

        scanf("%d",&n);

        int x[n];

        for(i=0; i<n; i++)
        {
            scanf("%d",&x[i]);
        }

        temp = x[0];

        for(i=0; i<n; i++)
        {
            if(temp>x[i])
            {
                temp = x[i];
            }
        }

        for(i=0; i<n; i++)
        {
            sum+=x[i];
        }

        result = sum-temp;
        printf("%d",result);
    }

    return 0;
}

#include<stdio.h>

int main()
{
    int i,j,n,left=0,right=0,result;
    scanf("%d",&n);

    int arr[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        left += arr[i][i];
    }

    for(i=n-1,j=0;i>=0;i--,j++)
    {
        right += arr[i][j];
    }

    result = abs(left-right);

    printf("%d",result);

    return 0;
}

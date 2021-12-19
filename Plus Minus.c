#include <stdio.h>

int main()
{
    int i,n;
    float positive=0,negative=0,zero=0;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }else if(arr[i]>0)
        {
            positive++;
        }else if(arr[i]<0)
        {
            negative++;
        }
    }

    printf("%.6f\n%.6f\n%.6f",positive/n,negative/n,zero/n);


    return 0;
}

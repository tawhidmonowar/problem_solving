#include <stdio.h>

int main()
{
    int i,n,r=0;
    char arr[100];

    scanf("%d",&n);

    scanf("%s",&arr);

    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            r++;
        }
    }

    printf("%d",r);

    return 0;
}

#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int n,x,y,midPosition;
        scanf("%d%d%d",&n,&x,&y);
        midPosition = (n/2)+1;

        if(x%2==0 && y%2==0)
        {
            printf("0\n");
        }else if(x%2!=0 && y%2!=0)
        {
            printf("0\n");
        }else
        {
            printf("1\n");
        }
    }
    return 0;
}

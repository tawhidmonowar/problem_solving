#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,result=0,temp;
        scanf("%d",&n);

        while(n>0)
        {
            temp=n%10;
            result+=temp;
            n=n/10;
        }
        printf("%d\n",result);

    }
    return 0;
}

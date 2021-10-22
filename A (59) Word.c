#include <stdio.h>

int main()
{
    int i,n,result=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2)
        {
            result-=i;
            printf("result-%d\n",i);
        }else
        {
            result+=i;
            printf("result+%d\n",i);
        }
    }

    printf("%d",result);

    return 0;
}

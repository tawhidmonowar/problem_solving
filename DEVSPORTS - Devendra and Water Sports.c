#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int z,y,a,b,c,total;
        scanf("%d%d%d%d%d",&z,&y,&a,&b,&c);

        total = y+a+b+c;

        if(z-total>=0)
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }
    }

    return 0;
}

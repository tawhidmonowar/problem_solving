#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        int t1,t2,r1,r2;
        float x,y;
        scanf("%d%d%d%d",&t1,&t2,&r1,&r2);

        x=(float)(t1*t1)/(float)(r1*r1*r1);
        y=(float)(t2*t2)/(float)(r2*r2*r2);

        if(x==y)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}

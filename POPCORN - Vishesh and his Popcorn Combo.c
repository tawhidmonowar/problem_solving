#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        int a1,a2,b1,b2,c1,c2,x,y,z;
        scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);

        x=a1+a2;
        y=b1+b2;
        z=c1+c2;

        if(x>y && x>z)
        {
            printf("%d\n",x);
        }
        else if(y>x && y>z)
        {
            printf("%d\n",y);
        }
        else
        {
            printf("%d\n",z);
        }
    }

    return 0;
}

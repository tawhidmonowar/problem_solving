#include<stdio.h>

int main()
{
    int i,a,b,t,r;

    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%d%d",&a,&b);
        r = a+b;
        if(r%2==0)
        {
            printf("Bob\n");
        }
        else
        {
            printf("Alice\n");
        }
    }

    return 0;
}

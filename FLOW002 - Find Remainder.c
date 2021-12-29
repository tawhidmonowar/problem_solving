#include<stdio.h>

int main()
{
    int i,testCase,a,b;
    scanf("%d",&testCase);

    for(i=0; i<testCase; i++)
    {
        scanf("%d%d",&a,&b);
        printf("%d\n",a%b);
    }

    return 0;
}

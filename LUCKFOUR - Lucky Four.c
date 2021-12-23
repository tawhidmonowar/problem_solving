#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        char x[1000000];
        scanf("%s",&x);
        int i,result=0;

        for(i=0; x[i]!='\0'; i++)
        {
            if(x[i]=='4')
            {
                result++;
            }
        }

        printf("%d\n",result);
    }
    return 0;
}

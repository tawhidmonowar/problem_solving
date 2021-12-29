#include <stdio.h>

int main()
{
    int i,testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {

        char x[10000];
        scanf("%s",x);

        for(i=0; x[i]!='\0'; i++)
        {

            if(i%2)
            {

            }
            else
            {
                printf("%c",x[i]);
            }
        }

        printf(" ");

        for(i=0; x[i]!='\0'; i++)
        {
            if(i%2)
            {
                printf("%c",x[i]);
            }
        }

        printf("\n");
    }

    return 0;
}


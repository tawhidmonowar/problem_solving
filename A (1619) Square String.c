#include<stdio.h>
#include<string.h>

int main()
{
    char x[1000],xLeft[500],xRight[500];
    int i,j,xlen,xHalf,testCase;

    scanf("%d",&testCase);

    while(testCase--)
    {
        scanf("%s",x);
        xlen = strlen(x);
        xHalf = xlen/2;

        for(i=0; i<xHalf; i++)
        {
            xLeft[i]=x[i];
        }

        xLeft[i]='\0';

        for(i=xHalf,j=0; i<=xlen; i++,j++)
        {
            xRight[j]=x[i];
        }

        xRight[j]='\0';


        if(strcmp(xLeft,xRight)==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}

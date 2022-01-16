#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,l;
    char x[200],y[100],ch;

    scanf("%s",&x);
    for(i=0,j=0; x[i]!='\0'; i++)
    {
        if(x[i]!='+')
        {
            y[j]=x[i];
            j++;
        }
    }

    y[j]='\0';

    l=strlen(y);

    for(i=1; i<l; i++)
    {
        for(j=0; j<l-i; j++)
        {
            if(y[j]>y[j+1])
            {
                ch=y[j];
                y[j] = y[j+1];
                y[j+1]=ch;
            }
        }
    }

    for(i=0;i<l;i++)
    {
        if(i==l-1)
        {
            printf("%c",y[i]);
        }else
        {
            printf("%c+",y[i]);
        }
    }

    return 0;
}

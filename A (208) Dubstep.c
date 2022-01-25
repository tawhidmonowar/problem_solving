#include <stdio.h>
#include <string.h>

int main()
{
    int i,xLen,point=0;
    char x[500];
    scanf("%s",x);
    xLen = strlen(x);

    for(i=0; i<xLen; i++)
    {
        if(x[i]=='W' && x[i+1]=='U' && x[i+2]=='B')
        {
            i+=2;
            if(point>0 && x[i+1]!='W' && x[i+2]!='U' && x[i+3]!='B')
            {
                printf(" ");
            }
        }
        else
        {
            printf("%c",x[i]);
            point=1;
        }
    }

    return 0;
}

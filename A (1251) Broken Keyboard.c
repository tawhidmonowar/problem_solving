#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int i,j,xLen,yLen;
        char x[1000],y[1000],z[1000],chTemp;
        scanf("%s",x);
        xLen = strlen(x);

        for(i=0,j=0; i<xLen; i++)
        {
            if(x[i]==x[i+1])
            {
                i+=1;
            }
            else
            {
                y[j]=x[i];
                j++;
            }
        }

        y[j]='\0';
        yLen = strlen(y);

        for(i=0; i<yLen; i++)
        {
            for(j=0; j<(yLen-1); j++)
            {
                if(y[j]>y[j+1])
                {
                    chTemp = y[j];
                    y[j] = y[j+1];
                    y[j+1] = chTemp;
                }
            }
        }

        z[0]=y[0];
        for(i=0,j=0; i<yLen; i++)
        {
            if(z[j]!=y[i+1])
            {
                j++;
                z[j]=y[i+1];
            }
        }
        z[j]='\0';
        printf("%s\n",z);
    }

    return 0;
}

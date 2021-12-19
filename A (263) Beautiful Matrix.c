#include <stdio.h>

int main()
{
    int aMatrix[10][10];
    int amRow=5,amCol=5,result=0;
    int i,j,r,c;

    for (i=0; i<amRow; i++)
    {
        for (j=0; j<amCol; j++)
        {
            scanf("%d",&aMatrix[i][j]);
        }
    }


    for (i=0; i<amRow; i++)
    {
        for (j=0; j<amCol; j++)
        {
            if(aMatrix[i][j]==1)
            {
                c=(i+1)-3;
                r=(j+1)-3;
            }
        }
    }

    result = abs(c)+abs(r);
    printf("%d",result);

    return 0;
}

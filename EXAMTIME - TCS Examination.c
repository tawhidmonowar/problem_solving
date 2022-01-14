#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int xDSA,xTOC,xDM,totalX;
        int yDSA,yTOC,yDM,totalY;

        scanf("%d%d%d",&xDSA,&xTOC,&xDM);
        scanf("%d%d%d",&yDSA,&yTOC,&yDM);

        totalX = xDSA+xTOC+xDM;
        totalY = yDSA+yTOC+yDM;

        if(totalX>totalY)
        {
            printf("DRAGON\n");

        }
        else if(totalX==totalY)
        {
            if(xDSA>yDSA)
            {
                printf("DRAGON\n");

            }
            else if(xDSA==yDSA)
            {
                if(xTOC>yTOC)
                {
                    printf("DRAGON\n");

                }
                else if(xTOC==yTOC)
                {
                    printf("TIE\n");
                }
                else
                {
                    printf("SLOTH\n");
                }
            }
            else
            {
                printf("SLOTH\n");
            }
        }
        else
        {
            printf("SLOTH\n");
        }
    }
    return 0;
}

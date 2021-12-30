#include <stdio.h>
#include <stdbool.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        int i,n;
        bool code=false,chef=false;
        scanf("%d",&n);
        char x[n];
        scanf("%s",&x);

        for(i=0; x[i]!='\0'; i++)
        {
            if(x[i]=='c'&&x[i+1]=='o'&& x[i+2]=='d'&& x[i+3]=='e')
            {
                i=i+3;
                code=true;
            }
            if(x[i]=='c'&& x[i+1]=='h'&& x[i+2]=='e'&& x[i+3]=='f')
            {
                chef=true;
                break;
            }

            if(chef==true && code==false)
            {
                printf("WA\n");
                return 0;
                break;
            }
        }

        if(code && chef)
        {
            printf("AC\n");
        }
        else
        {
            printf("WA\n");
        }
    }

    return 0;
}

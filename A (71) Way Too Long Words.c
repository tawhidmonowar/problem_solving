#include <Stdio.h>
#include <string.h>
int main()
{
    int i,n,t;
    char x[100];

    scanf("%d",&t);

    for(i=0; i<=t; i++)
    {
        gets(x);

        n = strlen(x);

        if(n>10)
        {
            printf("%c%d%c\n",x[0],n-2,x[n-1]);
        }
        else
        {
            printf("%s\n",x);
        }
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int i,a,b;
    char x[100];
    scanf("%s",&x);
    scanf("%d%d",&a,&b);

    for(i=0;x[i]!='\0';i++)
    {
        if(i==a-1)
        {
            printf("%c",x[b-1]);
        }else if(i==b-1)
        {
            printf("%c",x[a-1]);
        }else
        {
            printf("%c",x[i]);
        }

    }

    return 0;
}

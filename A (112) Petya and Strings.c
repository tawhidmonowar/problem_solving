#include <stdio.h>
#include<string.h>
int main()
{
    char x[100],y[100];
    int i;
    scanf("%s",x);
    scanf("%s",y);

    for (i = 0; x[i]!='\0'; i++)
    {
        if(x[i] >= 'A' && x[i] <= 'Z')
        {
            x[i] = x[i] +32;
        }
    }

    for (i = 0; y[i]!='\0'; i++)
    {
        if(y[i] >= 'A' && y[i] <= 'Z')
        {
            y[i] = y[i] +32;
        }
    }

    printf("%d",strcmp(x,y));

    return 0;
}
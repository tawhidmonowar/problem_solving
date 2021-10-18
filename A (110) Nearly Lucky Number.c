#include<stdio.h>
#include<string.h>

int main()
{
    int i,y,z=0;
    char x[10000];

    scanf("%s",x);
    y = strlen(x);

    for(i=0; x[i]!='\0'; i++)
    {
        if(x[i]=='4'||x[i]=='7')
        {
            z++;
        }
    }

    if(z==4||z==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
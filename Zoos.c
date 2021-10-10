#include <stdio.h>

int main()
{
    char n[20];
    int x=0,y=0,i;

    scanf("%s",&n);

    for(i=0;n[i]!='\0';i++)
    {
        if(n[i]=='z'||n[i]=='Z')
        {
            x +=1;
        }else
        {
            y+=1;
        }
    }

    if(x*2==y)
    {
        printf("Yes");
    }else
    {
        printf("No");
    }


}

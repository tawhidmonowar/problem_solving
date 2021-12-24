#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    gets(str);

    int i,count=0,j=strlen(str);

    for(i=0; i<j; i++)
    {
        if(str[i]==tolower(str[i]))
            count++;
    }

    if(count==0)
    {
        for(i=0; i<j; i++)
        {
            str[i]=tolower(str[i]);
        }
        puts(str);
    }

    else if(count==1 && str[0]==tolower(str[0]))
    {
        str[0]=toupper(str[0]);
        for(i=1; i<j; i++)
        {
            str[i]=tolower(str[i]);
        }
        puts(str);
    }
    else
    {
        puts(str);
    }

    return 0;
}

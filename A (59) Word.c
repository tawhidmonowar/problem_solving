#include <stdio.h>
#include <string.h>
int main()
{
    char x[100];
    int i,l=0,r=0;

    scanf("%s",x);

    for(i=0; x[i]!='\0'; i++)
    {
        if(x[i]<96)
        {
            r++;
        }
        else
        {
            l++;
        }
    }

    if(r<l || r==l)
    {
        for(i=0; x[i]!='\0'; i++)
        {
            if(x[i]<96)
            {
                x[i] +=32;
            }
        }
    }else if(r>l)
    {
        for(i=0; x[i]!='\0'; i++)
        {
            if(x[i]>96)
            {
                x[i] -=32;
            }
        }
    }

    printf("%s\n",x);


    return 0;
}

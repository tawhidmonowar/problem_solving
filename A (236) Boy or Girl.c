#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char x[100];
    int i,j,r = 0;
    scanf("%s",x);

    for(i=0; i<strlen(x); i++)
    {
        int n = 1;
        for(j=i+1; j<strlen(x); j++)
        {
            if(x[i] == x[j])
            {
                n = 0;
                break;
            }
        }
        if(n == 1)
        {
            r++;
        }
    }
    if(r % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}
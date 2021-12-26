#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000];
    scanf("%s",S);
    int i,count=0;

    for(i=0; S[i]!='\0'; i+=3)
    {
        if(S[i]!='S')
        {
            count++;
        }
        if(S[i+1]!='O')
        {
            count++;
        }
        if(S[i+2]!='S')
        {
            count++;
        }
    }

    printf("%d",count);
    return 0;
}

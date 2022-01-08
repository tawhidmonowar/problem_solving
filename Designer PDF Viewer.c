#include <stdio.h>
#include <string.h>

int main()
{
    int i,alphabet[26],temp=0,x;
    char s[100];

    for(i=0;i<26;i++)
    {
        scanf("%d",&alphabet[i]);
    }

    scanf("%s",&s);

    for(i=0;s[i]!='\0';i++)
    {
        if(alphabet[s[i]-97]>temp)
        {
            temp=alphabet[s[i]-97];
        }
    }

    x=strlen(s);
    printf("%d",temp*x);

    return 0;
}

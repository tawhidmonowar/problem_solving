#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    int i=0;

    scanf("%s",str);

    for (i = 0; str[i]!='\0'; i++)
    {
        if (str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;

        }
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
        {
            str[i]=-1;
        }
        if (str[i]!=-1)
        {
            printf(".");
            printf("%c",str[i]);
        }

    }

    printf("\n");
    return 0;

}
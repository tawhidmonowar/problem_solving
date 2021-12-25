#include <stdio.h>
#include <string.h>

int main()
{

    char str[100000];
    int i=0,result=0;

    scanf("%s",str);

    for (i=0; str[i]!='\0'; i++)
    {
        if (str[i]>='A'&&str[i]<='Z')
        {
            result++;

        }
    }

    if(str[0]>='a'&&str[0]<='z')
    {
        result+=1;
    }

    printf("%d",result);
    return 0;

}

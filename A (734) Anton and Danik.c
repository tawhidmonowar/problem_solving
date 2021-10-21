#include <stdio.h>

int main()
{
    int i,Anton=0,Danik=0,n;
    scanf("%d",&n);
    char x[n];
    scanf("%s",x);

    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]=='A')
        {
            Anton++;

        }else if (x[i]=='D')
        {
            Danik++;
        }
    }

    if(Anton>Danik)
    {
        printf("Anton");

    }else if (Danik>Anton)
    {
        printf("Danik");
    }else
    {
        printf("Friendship");
    }

    return 0;
}
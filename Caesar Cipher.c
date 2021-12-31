#include <stdio.h>
#include <string.h>

int main()
{
    int i,k,n;
    scanf("%d",&n);
    char x[n];
    scanf("%s",x);
    scanf("%d",&k);


    while(k>26)
    {
        k=k-26;
    }

    for(i=0; x[i]!='\0'; i++)
    {

        if(x[i]>=97 && x[i]<=122-k)
        {
            printf("%c",x[i]+k);
        }
        else if(x[i]>97 && x[i]<=122)
        {
            printf("%c",x[i]-26+k);
        }
        else if(x[i]>=65 && x[i]<=90-k)
        {
            printf("%c",x[i]+k);
        }
        else if(x[i]>65 && x[i]<=90)
        {
            printf("%c",x[i]-26+k);
        }
        else
        {
            printf("%c",x[i]);
        }
    }

    return 0;
}

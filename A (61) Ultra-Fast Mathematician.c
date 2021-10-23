#include <stdio.h>
#include <string.h>

int main()
{
    int i,n;
    char x[1000],y[1000];
    scanf("%s%s",x,y);

    n=strlen(x);

    for(i=0; i<n; i++) {

        if(x[i]==y[i])
        {
             printf("0");

        }else
        {
            printf("1");
        }
    }

    return 0;
}

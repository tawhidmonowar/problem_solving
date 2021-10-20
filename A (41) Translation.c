#include <stdio.h>
#include <string.h>

int main()
{
    char x[1000],y[1000];
    int n;

    scanf("%s",x);
    scanf("%s",y);

    n=strcmp(x,strrev(y));

    if(n==0)
    {
      printf("YES");

    }else
    {
      printf("NO");
    }

    return 0;
}

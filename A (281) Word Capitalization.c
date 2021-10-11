#include <stdio.h>

int main()
{
    char x[1000];
    scanf("%s",&x);

    if(x[0]>96)
    {
        x[0]-=32;
    }

    printf("%s",x);

    return 0;
}

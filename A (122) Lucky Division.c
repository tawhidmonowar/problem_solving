#include <stdio.h>

int main()
{
    int x,i,n[]= {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    scanf("%d",&x);

    for(i=0; i<14; i++)
    {
        if(x%n[i]==0)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}

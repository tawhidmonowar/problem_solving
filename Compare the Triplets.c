#include <stdio.h>

int main ()
{
    int i,a[5],b[5],Alice=0,Bob=0;

    for(i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<=2;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<=2;i++)
    {
        if(a[i]>b[i])
        {
            Alice++;

        }else if(a[i]<b[i])
        {
            Bob++;
        }
    }

    printf("%d %d",Alice, Bob);

    return 0;
}

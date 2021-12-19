#include <stdio.h>

int main()
{
    int i,n,x[100],y[100],z[100];
    int xr=0,yr=0,zr=0;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
        scanf("%d",&y[i]);
        scanf("%d",&z[i]);
    }

    for(i=0; i<n; i++)
    {
        xr+=x[i];
        yr+=y[i];
        zr+=z[i];
    }

    if(xr==0&&yr==0&&zr==0)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }

    return 0;
}

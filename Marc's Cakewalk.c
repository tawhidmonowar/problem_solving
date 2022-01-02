#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,n;
    double temp=0;

    scanf("%d",&n);
    int x[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0; i<=n-1; i++)
    {
        for(j=i; j>0 && x[j-1]> x[j]; j--)
        {
            temp  = x[j];
            x[j] = x[j-1];
            x[j-1] = temp;
        }
    }

    temp = 0;

    for(i=0,j=n-1; i<n; i++,j--)
    {
        temp += pow(2,j)*x[i];
    }

    printf("%.0lf",temp);

    return 0;
}

#include<stdio.h>

int main()
{
    long int i,j,n=5,min=0,sum=0,max=0;

        long int x[n];

        for(i=0; i<n; i++)
        {
            scanf("%ld",&x[i]);
        }

        min = x[0];

        for(i=0; i<n; i++)
        {
            if(min>x[i])
            {
                min = x[i];
            }
        }

         for(i=0; i<n; i++)
        {
            if(max<x[i])
            {
                max = x[i];
            }
        }

        for(i=0; i<n; i++)
        {
            sum+=x[i];
        }

        printf("%ld %ld",sum-max,sum-min);

    return 0;
}

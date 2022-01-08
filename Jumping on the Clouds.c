#include<stdio.h>

int main()
{
    int i,x[1000],n,jump=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0;i<n;i++)
    {
        if(x[i]==0 && x[i+1]==0 && x[i+2]==0)
        {
            jump++;

            i++;

        }else if(x[i]==0 && x[i+1]==1 && x[i+2]==0)
        {
            jump++;
            i++;


        }else if(x[i]==0 && x[i+1]==0 && x[i+2]==1)
        {
            jump+=2;
            i+=2;

        }
    }

    if(x[n-2]==0 && x[n-1]==0)
    {
        jump++;
    }

    printf("%d",jump);

    return 0;
}

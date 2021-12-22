#include<stdio.h>

int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        int Rs1=0,Rs2=0,Rs5=0,Rs10=0,Rs50=0,Rs100=0;
        int i,n,result=0;

        scanf("%d",&n);
        for(i=0;n>0;i++)
        {
            if(n>=100)
            {
                n=n-100;
                Rs100++;
            }else if(n>=50)
            {
                n=n-50;
                Rs50++;
            }else if(n>=10)
            {
                n=n-10;
                Rs10++;
            }else if(n>=5)
            {
                n=n-5;
                Rs5++;
            }else if(n>=2)
            {
                n=n-2;
                Rs2++;
            }else if(n>=1)
            {
                n=n-1;
                Rs1++;
            }
        }

        result = Rs1+Rs2+Rs5+Rs10+Rs50+Rs100;
        printf("%d\n",result);

    }

    return 0;
}

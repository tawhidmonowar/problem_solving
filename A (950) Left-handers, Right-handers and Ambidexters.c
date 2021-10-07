#include <Stdio.h>
int main()
{
    int l,r,a,i,o,j;
    scanf("%d%d%d",&l,&r,&a);

    if(l==0 && r==0 && a ==0 || l==0 && r!=0 && a == 0 || l!=0 && r==0 && a==0)
    {
        printf("%d",0);

    }
    else if(a==0)
    {
        if(l>r)
        {
            r*=2;
            if(r%2==0)
            {
                printf("%d",r);
            }
            else
            {
                printf("%d",r-1);
            }
        }
        else
        {
            l*=2;
            if(l%2==0)
            {
                printf("%d",l);
            }
            else
            {
                printf("%d",l-1);
            }
        }
    }

    else if(l+a<r)
    {
        o = (a+l)*2;

        if(o%2==0)
        {
            printf("%d",o);
        }
        else
        {
            printf("%d",o-1);
        }
    }

    else if(r+a<l)
    {
        o = (a+r)*2;

        if(o%2==0)
        {
            printf("%d",o);
        }
        else
        {
            printf("%d",o-1);
        }
    }

    else if(l==0 && r ==0)
    {
        o=a;

        if(o%2==0)
        {
            printf("%d",o);
        }
        else
        {
            printf("%d",o-1);
        }
    }
    else
    {
        for (i=0; i<a; i++)
        {
            if(l<=r)
            {
                l++;
            }
            else
            {
                r++;
            }
        }

        o = l+r;


        if(o%2==0)
        {
            printf("%d",o);
        }
        else
        {
            printf("%d",o-1);
        }
    }


    return 0;
}

#include<stdio.h>

int main()
{
    int i,n,t,R,G,B;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        char s[n];
        scanf("%s",&s);
        R=n;
        G=n;
        B=n;

        for(i=0; i<n; i++)
        {
            if(s[i]=='R')
            {
                R--;
            }
            else if(s[i]=='G')
            {
                G--;
            }
            else
            {
                B--;
            }
        }

        if(R<=G&&R<=B)
        {
            printf("%d\n",R);
        }
        else if(G<=R&&G<=B)
        {
            printf("%d\n",G);
        }
        else if(B<=R&&B<=G)
        {
            printf("%d\n",B);
        }
    }
    return 0;
}

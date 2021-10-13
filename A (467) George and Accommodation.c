#include<stdio.h>
int main()
{
    int n,a,b,i,r=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&a,&b);
        if(a!=b && (b-a)!=1)
        {
            r++;
        }
    }
    printf("%d",r);
}

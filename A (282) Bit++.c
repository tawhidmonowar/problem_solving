#include <stdio.h>
#include<string.h>
int main()
{
    char x[20],c1[]="X++",c2[]="++X";
    int v1,v2,r=0,i,n;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%s",x);

        v1=strcmp(x,c1);
        v2=strcmp(x,c2);

        if(v1==0 || v2==0)
        {
            r+=1;

        }else
        {
            r-=1;
        }
    }

    printf("%d",r);

    return 0;
}

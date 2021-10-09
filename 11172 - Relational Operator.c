#include <stdio.h>

int main()
{

    int i,n,x,y;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
       scanf("%d%d",&x,&y);
       if(x>y)
       {
           printf(">\n");
       }else if(x<y)
       {
           printf("<\n");
       }else
       {
           printf("=\n");
       }

    }

    return 0;
}

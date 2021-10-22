#include<stdio.h>

int main()
{
    int n,x,i;
    scanf("%d%d",&x,&n);

    for(i=1; i<=n; i++) {
        if(x%10==0) {
            x/=10;
        } else {
            x-=1;
        }
    }

    printf("%d",x);

    return 0;
}

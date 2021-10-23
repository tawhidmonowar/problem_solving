#include <stdio.h>

int main()
{
    long long int i,k,n,w,x,z=0;
    scanf("%lld%lld%lld",&k,&n,&w);

    for(i=1; i<=w; i++) {

        x=k*i;
        z+=x;
    }

    if(n>=z) {
        printf("0");
    } else {
        printf("%d",z-n);
    }

    return 0;
}

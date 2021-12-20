#include <stdio.h>

int main()
{
    long long int h,l;
    double x;
    scanf("%lld%lld",&h,&l);

    x=((l*l)-(h*h))/(double)(2*h);

    printf("%.13f",x);

    return 0;
}

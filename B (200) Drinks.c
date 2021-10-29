#include<stdio.h>
int main()
{
    int i,x,y;
    float result = 0;

    scanf("%d", &x);

    for(i = 1; i <=x; i++) {
        scanf("%d", &y);
        result += y;
    }

    result /= x;
    printf("%.12f", result);

    return 0;
}
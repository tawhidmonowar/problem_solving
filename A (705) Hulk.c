#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=1; i<=n-1; i++) {
        if(i%2) {
            printf("I hate that ");

        } else {
            printf("I love that ");
        }
    }

    if(i%2) {
        printf("I hate it ");

    } else {
        printf("I love it ");
    }
}

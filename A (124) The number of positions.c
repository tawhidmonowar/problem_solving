#include <stdio.h>

int main() {
    int n,a,b,c,r;
    scanf("%d%d%d", &n, &a, &b);
    c = n-a-1;
    if(c>b) {
        r = b+1;
    } else{
        r = c+1;
    }
    printf("%d", r);
    return 0;
}
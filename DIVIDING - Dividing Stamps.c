#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int n, a,i,t;
    t=0;
    scanf("%lld", &n);
    for(i=0; i<n; i++) scanf("%lld", &a), t+=a;
    if(n*(n+1)/2==t) printf("YES\n");
    else printf("NO\n");
    return 0;
}
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int x,int y, int z, int w)
{
    if (x>=y && x>=z && x>=w) {
    return x;
    }else if (y>=x && y>=z && y>=w) {
    return y;
    }else if (z>=x && z>=y && z>=w) {
    return z;
    }else {
    return w;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
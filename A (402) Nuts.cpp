#include <stdio.h>

int main(){

    int k,a,b,v;
    scanf("%d %d %d %d", &k, &a, &b, &v);

    int remaining = a;
    int output = 0;

    while(remaining > 0){

        ++output;
        int compartments = 0;
        if(b > k - 1){compartments = k; b -= (k - 1);}
        else{compartments = b + 1; b = 0;}

        remaining -= v * compartments;

    }

    printf("%d\n", output);

    return 0;
}
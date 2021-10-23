#include <stdio.h>

int main()
{
    int i,L,B,R=0;
    scanf("%d%d",&L,&B);

    for(i=0; i<L; i++) {

        if(B>=L)
        {
            L*=3;
            B*=2;
            R+=1;
        }
    }

    printf("%d",R);

    return 0;
}

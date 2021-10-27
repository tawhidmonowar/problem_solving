#include <stdio.h>

int main()
{

    char x[100];
    int i,n,h=0;
    scanf("%s",x);

    for(i=0; x[i]!='\0'; i++) {
        if(x[i]=='h'&h==0) {
            h++;
        } else if(x[i]=='e'&&h==1) {
            h++;
        } else if(x[i]=='l'&&h==2) {
            h++;
        } else if(x[i]=='l'&&h==3) {
            h++;
        }else if(x[i]=='o'&&h==4) {
            h++;
        }
    }

    if(h==5) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

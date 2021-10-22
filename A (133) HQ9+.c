#include<stdio.h>

int main()
{
    int n,i;
    char s[100];
    scanf("%s",s);

    for(i=0; s[i]!='\0'; i++) {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9') {
            printf("YES");
            return 0;
        }
    }

    printf("NO");

    return 0;
}

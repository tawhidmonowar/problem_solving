#include <stdio.h>
#include <string.h>

int main()
{
    int i,n;
    char x[100];

    scanf("%s",x);
    n = strlen(x);

    for(i=0; i<n; i++) {
        if(x[i]=='0'&&x[i+1]=='0'&&x[i+2]=='0'&&x[i+3]=='0'&&x[i+4]=='0'&&x[i+5]=='0'&&x[i+6]=='0') {
            printf("YES");
            return 0;
        } else if(x[i]=='1'&&x[i+1]=='1'&&x[i+2]=='1'&&x[i+3]=='1'&&x[i+4]=='1'&&x[i+5]=='1'&&x[i+6]=='1') {
            printf("YES");
            return 0;
        }
    }

    printf("NO");

    return 0;
}

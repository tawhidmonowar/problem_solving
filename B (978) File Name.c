#include<stdio.h>

int main()
{
    int i,n,z=0;

    scanf("%d",&n);
    char x[n];
    scanf("%s",x);

    for(i=0; x[i]!='\0'; i++)
    {
        if(x[i]=='x'&&x[i+1]=='x'&&x[i+2]=='x')
        {
            z++;
        }
    }

    printf("%d",z);

    return 0;
}
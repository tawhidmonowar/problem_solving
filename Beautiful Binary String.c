#include <stdio.h>

int main()
{
    int i,n,result=0;
    scanf("%d",&n);
    char binaryString[n];

    scanf("%s",binaryString);

    for(i=0;binaryString[i]!='\0';i++)
    {
        if(binaryString[i]=='0' && binaryString[i+1]=='1' && binaryString[i+2]=='0')
        {
            result++;
            i=i+2;
        }
    }

    printf("%d",result);

    return 0;
}

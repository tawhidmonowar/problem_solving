#include <stdio.h>

int main()
{
    int i,n,reResult=0,reLoop=0,temp=0,rePeople=5;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        reResult = rePeople/2;
        temp+=reResult;
        reLoop = reResult*3;
        rePeople = reLoop;
    }

    printf("%d",temp);

    return 0;
}

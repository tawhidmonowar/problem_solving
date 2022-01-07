#include<stdio.h>

int reverseNumber(int x)
{
    int rev=0,rem;

    while(x!=0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }

    return rev;
}

int main()
{
    int i,y,z,n,temp=0,result=0;
    float temp2=0;

    scanf("%d%d%d",&y,&z,&n);

    for(i=y;i<=z;i++)
    {
        temp=i-reverseNumber(i);
        temp2=(float)(abs(temp)/(float)n);

        int ch=temp2;
        if(ch==temp2)
        {
            result++;
        }
    }

    printf("%d",result);

    return 0;
}

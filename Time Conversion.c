#include <stdio.h>

int main()
{
    int i,strlen;
    char oldTime[100];
    scanf("%s",oldTime);

    if(oldTime[8]=='A')
    {
        if(oldTime[0]=='0'&&oldTime[1]=='1')
        {
            oldTime[8]=NULL;
        }else if(oldTime[0]=='0'&&oldTime[1]=='2')
        {
            oldTime[8]=NULL;
        }else if(oldTime[0]=='0'&&oldTime[1]=='3')
        {
            oldTime[8]=NULL;
        }else if(oldTime[0]=='0'&&oldTime[1]=='4')
        {
            oldTime[8]=NULL;
        }else if(oldTime[0]=='0'&&oldTime[1]=='5')
        {
            oldTime[8]=NULL;
        }else if(oldTime[0]=='0'&&oldTime[1]=='6')
        {
            oldTime[8]=NULL;
        }
        else if(oldTime[0]=='0'&&oldTime[1]=='7')
        {
            oldTime[8]=NULL;
        }else if(oldTime[0]=='0'&&oldTime[1]=='8')
        {
            oldTime[0]='2';
            oldTime[1]='0';
            oldTime[8]=NULL;
        }else if(oldTime[0]=='0'&&oldTime[1]=='9')
        {
            oldTime[8]=NULL;
        }else if(oldTime[0]=='1'&&oldTime[1]=='0')
        {
            oldTime[8]=NULL;
        }else if(oldTime[0]=='1'&&oldTime[1]=='1')
        {
            oldTime[8]=NULL;
        }else if(oldTime[0]=='1'&&oldTime[1]=='2')
        {
            oldTime[0]='0';
            oldTime[1]='0';
            oldTime[8]=NULL;
        }

    }else if(oldTime[8]=='P')
    {
        if(oldTime[0]=='0'&&oldTime[1]=='1')
        {
            oldTime[0]='1';
            oldTime[1]='3';
            oldTime[8]=NULL;
        }else if(oldTime[0]=='0'&&oldTime[1]=='2')
        {
            oldTime[0]='1';
            oldTime[1]='4';
            oldTime[8]=NULL;
        }else if(oldTime[0]=='0'&&oldTime[1]=='3')
        {
            oldTime[0]='1';
            oldTime[1]='5';
            oldTime[8]=NULL;
        }else if(oldTime[0]=='0'&&oldTime[1]=='4')
        {
            oldTime[0]='1';
            oldTime[1]='6';
            oldTime[8]=NULL;
        }else if(oldTime[0]=='0'&&oldTime[1]=='5')
        {
            oldTime[0]='1';
            oldTime[1]='7';
            oldTime[8]=NULL;
        }else if(oldTime[0]=='0'&&oldTime[1]=='6')
        {
            oldTime[0]='1';
            oldTime[1]='8';
            oldTime[8]=NULL;
        }
        else if(oldTime[0]=='0'&&oldTime[1]=='7')
        {
            oldTime[0]='1';
            oldTime[1]='9';
            oldTime[8]=NULL;
        }else if(oldTime[0]=='0'&&oldTime[1]=='8')
        {
            oldTime[0]='2';
            oldTime[1]='0';
            oldTime[8]=NULL;
        }else if(oldTime[0]=='0'&&oldTime[1]=='9')
        {
            oldTime[0]='2';
            oldTime[1]='1';
            oldTime[8]=NULL;
        }else if(oldTime[0]=='1'&&oldTime[1]=='0')
        {
            oldTime[0]='2';
            oldTime[1]='2';
            oldTime[8]=NULL;
        }else if(oldTime[0]=='1'&&oldTime[1]=='1')
        {
            oldTime[0]='2';
            oldTime[1]='3';
            oldTime[8]=NULL;
        }else if(oldTime[0]=='1'&&oldTime[1]=='2')
        {
            oldTime[0]='1';
            oldTime[1]='2';
            oldTime[8]=NULL;
        }
    }

    printf("%s",oldTime);

    return 0;
}

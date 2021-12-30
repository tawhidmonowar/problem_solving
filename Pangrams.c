#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int i,freqArray[26]= {0};
    char x[1000];
    gets(x);


    for(i=0; x[i]!='\0'; i++)
    {
        if(x[i] != ' ')
        {
            char c = tolower(x[i]);
            int index = c-'a';
            freqArray[index]=1;
        }

    }

    bool temp=true;

    for(i=0; i<=26; i++)
    {
        if(freqArray[i]==0)
        {
            temp = false;
        }
    }

    if(temp)
    {
        printf("pangram");
    }
    else
    {
        printf("not pangram");
    }

    return 0;
}

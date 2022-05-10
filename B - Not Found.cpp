#include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int i,feArr[26]={0};
        char temp;
        bool y=false;
        string x;
        cin >> x;

        for(i=0; i<x.length(); i++)
        {
            char c = x[i];
            int index = (int)c-97;
            feArr[index]=1;
        }

        for(i=0; i<26; i++)
        {
            if(feArr[i]==0)
            {
                temp=i+97;
                printf("%c\n",temp);
                y=false;
                break;
            }
            else
            {
                y=true;
            }
        }

        if(y)
        {
            printf("None\n");
        }
        return 0;
    }

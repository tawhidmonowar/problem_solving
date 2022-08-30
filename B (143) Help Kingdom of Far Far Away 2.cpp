#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string inputStr,finalStr;
    cin >> inputStr;
    bool dotFound = false;

    if(inputStr[0]=='-')
    {
        finalStr.push_back('(');
        finalStr.push_back('$');
        for(int i=1; i<inputStr.length(); i++)
        {
            if(inputStr[i]=='.')
            {
                if(i+2==inputStr.length())
                {
                    finalStr+=inputStr[i];
                    finalStr+=inputStr[i+1];
                    finalStr+='0';
                }
                else
                {
                    finalStr+=inputStr[i];
                    finalStr+=inputStr[i+1];
                    finalStr+=inputStr[i+2];
                }
                dotFound = true;
                break;
            }
            else
            {
                finalStr+=inputStr[i];
            }
        }

        if(dotFound==false)
        {
            finalStr+=".00";
        }

        for(int i=finalStr.length()-6; i>=3; i-=3)
        {
            finalStr.insert(i,1,',');
        }
        finalStr.push_back(')');
    }
    else
    {
        finalStr.push_back('$');
        for(int i=0; i<inputStr.length(); i++)
        {
            if(inputStr[i]=='.')
            {
                if(i+2==inputStr.length())
                {
                    finalStr+=inputStr[i];
                    finalStr+=inputStr[i+1];
                    finalStr+='0';
                }
                else
                {
                    finalStr+=inputStr[i];
                    finalStr+=inputStr[i+1];
                    finalStr+=inputStr[i+2];
                }
                dotFound = true;
                break;
            }
            else
            {
                finalStr+=inputStr[i];
            }
        }

        if(dotFound==false)
        {
            finalStr+=".00";
        }

        for(int i=finalStr.length()-6; i>=2; i-=3)
        {
            finalStr.insert(i,1,',');
        }
    }

    cout << finalStr << endl;

}

int main()
{
    solve();
    return 0;
}

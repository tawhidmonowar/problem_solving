#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void constructStr(string str)
{
    for(long i=1; i<str.length(); i++)
    {
        if(str[i]=='?')
        {
            if(str[i-1]=='R')
            {
                str[i]='B';
            }
            else
            {
                str[i]='R';
            }
        }
    }

    cout << str << endl;

}

void solve(long test_case)
{
    long n;
    cin >> n;
    string str;
    cin >> str;

    long first_r=-1, first_b=-1;

    if(str[0]=='?')
    {
        for(long i=1; i<str.length(); i++)
        {
            if(str[i]=='R')
            {
                first_r = i+1;
                break;
            }

            if(str[i]=='B')
            {
                first_b=i+1;
                break;
            }
        }
    }

    if(first_r!=-1)
    {
        if(first_r%2==0)
        {
            str[0]='B';
        }
        else
        {
            str[0]='R';
        }
    }
    else if (first_b!=-1)
    {
        if(first_b%2==0)
        {
            str[0]='R';
        }
        else
        {
            str[0]='B';
        }
    }

    if(first_r==-1 && first_b ==-1 && str[0]=='?')
    {
        str[0]='B';
    }

    constructStr(str);

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long testCase;
    cin >> testCase;
    long test_case = testCase;

    while(testCase--)
    {
        solve(test_case-testCase);
    }

    return 0;
}
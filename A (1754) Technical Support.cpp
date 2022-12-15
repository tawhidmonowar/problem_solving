#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n,res=0;
    cin >> n;
    string str;
    cin >> str;

    for(long i=0; i<n; i++)
    {
        if(str[i]=='Q')
        {
            res++;
        }
        else
        {
            res--;
            if(res<0)
            {
                res=0;
            }
        }
    }

    if(res==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}

int main()
{

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}
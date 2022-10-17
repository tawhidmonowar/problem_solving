#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,temp,res=0;
    cin >> n;
    vector<int>vect;
    string str;
    cin >> str;

    for(int i=0; i<n; i++)
    {
        cin >> temp;
        vect.push_back(temp);
    }

    temp = 0;

    if(str[0]=='1')
    {
        res+=vect[0];
    }
    else
    {
        temp=vect[0];
    }

    for(int i=1; i<n; i++)
    {
        if(str[i]=='1')
        {
            if(temp>vect[i])
            {
                res+=temp;
            }
            else
            {
                res+=vect[i];
            }
        }

        if(str[i]=='0' || vect[i]<temp)
        {
            temp = vect[i];
        }

    }

    cout << res << endl;
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}

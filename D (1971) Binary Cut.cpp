#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    string str;
    cin >> str;
    int n = str.length();

    int res = 0;
    string temp = "";
    bool ok = true;

    for (int i = 0; i < n; ++i)
    {
        if (str[i]==str[i+1])
         {
            temp.push_back(str[i]);
         }
         else
         {
            if (ok && str[i]=='0' && str[i+1]=='1')
            {
                ok=false;
                temp.push_back(str[i]);

            }
            else
            {
                temp.push_back(str[i]);
                //cout << temp << " ";
                res++;
                temp="";
            }
         }
    }
    cout << res << endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int testCase;
    cin >> testCase;
    int test_case = testCase;

    while(testCase--)
    {
        solve(test_case-testCase);
    }

    return 0;
}
#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n,temp=1;
    cin >> n;
    string str;
    cin >> str;

    for(long i=1; i<=n; i++)
    {
        if(temp<=n)
        {
            cout << str[temp-1];
            temp+=i;
        }
        else
        {
            break;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}

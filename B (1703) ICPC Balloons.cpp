#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n;
    cin >> n;
    string str;
    cin >> str;

    set<char>st;

    for(long i=0; i<n; i++)
    {
        st.insert(str[i]);
    }

    cout << n-st.size()+(st.size()*2)<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}
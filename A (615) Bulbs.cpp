#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,x;
    cin >>n>>m;
    set <int>st;

    for(int i=0; i<n; i++)
    {
        cin >> x;

        for(int j=0; j<x; j++)
        {
            int temp;
            cin >> temp;
            st.insert(temp);
        }
    }

    if(m==st.size())
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
    solve();
    return 0;
}

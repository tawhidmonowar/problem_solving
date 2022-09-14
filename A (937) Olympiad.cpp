#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    set<int>st;

    for(int i=0; i<n; i++)
    {
        int temp;
        cin >> temp;
        if(temp>0)
        {
            st.insert(temp);
        }
    }

    cout << st.size();

}

int main()
{
    solve();
    return 0;
}

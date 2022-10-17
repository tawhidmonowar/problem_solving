#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,res=0;
    cin >> n;
    int arr[n];
    set<int>st;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        st.insert(arr[i]);
    }

    int temp = 10-st.size();

    for(int i=1; i<temp; i++)
    {
        res+=i;
    }

    cout << res*6 << endl;

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
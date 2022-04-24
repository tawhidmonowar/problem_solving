#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int i,n,result=0;
        cin >> n;
        int x[n];
        set<int>s;

        for(i=0;i<n;i++)
        {
            cin >> x[i];
            s.insert(x[i]);
        }
        
        cout << n-s.size() << endl;
    }

    return 0;
}

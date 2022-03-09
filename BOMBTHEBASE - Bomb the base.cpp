#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int i,n,x;
        cin >> n >> x;
        int house[n];
        vector <int> v;

        for(i=0; i<n; i++)
        {
            cin >> house[i];
            if(house[i]<x)
            {
                v.push_back(i+1);
            }
        }

        sort(v.begin(), v.end(), greater<int>());

        if(v.size()>0)
        {
            cout << v[0] << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
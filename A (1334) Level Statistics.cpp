#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n;
    cin >> n;
    vector<pair<long, long>> vect;

    for(long i=0; i<n; i++)
    {
        long temp,temp2;
        cin >> temp >> temp2;
        vect.push_back(make_pair(temp, temp2));
    }


    for(long i=0; i<n; i++)
    {
        if(vect[i].first<vect[i].second)
        {
            cout << "NO" << endl;
            return;
        }

        for(long j=i+1; j<n; j++)
        {
            if(vect[i].first>vect[j].first || vect[i].second>vect[j].second || vect[j].first<vect[j].second || vect[i].first==vect[j].first && vect[i].second<vect[j].second || vect[j].first-vect[i].first < vect[j].second-vect[i].second)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES\n";

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
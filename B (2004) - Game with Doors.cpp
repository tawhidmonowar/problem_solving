#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve(long test_case)
{
    vector<pair<long,long>> vect_pair;

    long ll,rr,LL,RR;
    cin >> ll >> rr;
    cin >> LL >> RR;

    vect_pair.push_back({ll,rr});
    vect_pair.push_back({LL,RR});

    sort(vect_pair.begin(),vect_pair.end());

    long l = vect_pair[0].first;
    long r = vect_pair[0].second;

    long L = vect_pair[1].first;
    long R = vect_pair[1].second;

    if(r<L)
    {
        cout << 1 << endl;
    }
    else if(r>=R)
    {
        long result = abs(R-L)+2;
        if(R==r)
        {
            result--;
        }
        if(l==L)
        {
            result--;
        }
        cout << result << endl;
    }
    else
    {
        long result = abs(r-L)+2;
        if(R==r)
        {
            result--;
        }
        if(l==L)
        {
            result--;
        }
        cout << result << endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long testCase;
    cin >> testCase;
    long test_case = testCase;

    while(testCase--)
    {
        solve(test_case-testCase);
    }

    return 0;
}

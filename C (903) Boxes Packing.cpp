#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
/*Author: TawhidMonowar*/
const int MOD = (int)1e9+7;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;

bool cmp(pair<int, int>& a,
         pair<int, int>& b)
{
    return a.second < b.second;
}

void sort(map<int, int>& M)
{
    vector<pair<int, int> > A;

    for (auto& it : M)
    {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);

    vector<pair<int, int> >::iterator it;
    it=A.end();
    it--;
    cout << it->second << endl;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    map<int,int>mp;

    for(int i=0; i<n; i++)
    {
        mp[arr[i]]++;
    }

    sort(mp);
}

int main()
{
    FastRead
    solve();

    return 0;
}

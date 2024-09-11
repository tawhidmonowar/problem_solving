#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,x,res=0;
    cin >> n >> x;
    vector<pair<int,int>>vect_pair;

    for (int i = 0; i < n; ++i)
    {
        int ai,bi;
        cin >> ai >> bi;
        vect_pair.push_back(make_pair(min(ai,bi),max(ai,bi)));
    }


    sort(vect_pair.begin(),vect_pair.end());
    int left = vect_pair[0].first;
    int right = vect_pair[0].second;


    for (int i = 1; i < n; ++i)
    {
        int new_left = vect_pair[i].first;
        int new_right = vect_pair[i].second;

        if (new_left>left && new_right<right)
        {
            left=new_left;
            right=new_right;
        }
        else if (new_left>left && new_left<right)
        {
            left=new_left;
        }
        else if (new_left<left && new_right <right)
        {
            right=new_right;
        }
        else if (((new_left  < left && new_right < left )) || ((new_left > right && new_right > right)))
        {
            cout << -1 << endl;
            return;
        }
    }

    if (left>x)
    {
        res=left-x;
    }
    else if (right<x)
    {
        res = x-right;
    }

    cout << res << endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
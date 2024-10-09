#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

bool sortByValueDesc(const pair<int, int> &a, const pair<int, int> &b) 
{
    return a.second > b.second;
}

void solve(int test_case)
{
    int n;
    cin >> n;
    int arr[n];
    map<int,int> mp;

    for (int i = 0; i < n; i++) 
    { 
        cin >> arr[i];
        mp[arr[i]]++;
    }

    vector<pair<int,int>> vect(mp.begin(),mp.end());
    sort(vect.begin(), vect.end(), sortByValueDesc);

    int gift_size = vect[0].second;
    int temp = gift_size;
    temp--;

    if (temp==0)
    {
        cout << 1 << endl;
        return;
    }

    for (int i = 1; i < vect.size(); ++i)
    {
        if (temp>=vect[i].second)
        {
            gift_size += vect[i].second;
            temp = vect[i].second;
            temp--;
            if (temp==0)
            {
                break;
            }
        }
        else
        {
            gift_size += temp;
            temp--;
            if (temp==0)
            {
                break;
            }
        }

    }

    cout << gift_size << endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int testCase;
    cin >> testCase;
    int test_case = testCase;

    while(testCase--)
    {
        solve(test_case-testCase);
    }

    return 0;
}
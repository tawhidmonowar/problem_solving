#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

vector<int>vect;

void solve(int test_case)
{
    int n;
    cin >> n;

    int arr[n+10]={0};
    int brr[n+10]={0};

    for (int i = 0; i < n; i++) { cin >> arr[i]; }
    for (int i = 0; i < n; i++) { cin >> brr[i]; }

    map<int, int> mp_a;
    int temp = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i]==arr[i+1])
        {
            temp++;
        }
        else
        {
            mp_a[arr[i]] = max(mp_a[arr[i]],temp+1);
            temp = 0; 
        }
    }


    map<int, int> mp_b;
    temp = 0;

    for (int i = 0; i < n; ++i)
    {
        if (brr[i]==brr[i+1])
        {
            temp++;
        }
        else
        {
            mp_b[brr[i]] = max(mp_b[brr[i]],temp+1);
            temp = 0; 
        }
    }

    int res = 0;
    temp = 0;

    for(auto x:mp_a)
    {
        temp = x.second + mp_b[x.first];
        res = max(temp,res);
    }

    for(auto x:mp_b)
    {
        temp = x.second + mp_a[x.first];
        res = max(temp,res);
    }

    cout << res << endl;

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
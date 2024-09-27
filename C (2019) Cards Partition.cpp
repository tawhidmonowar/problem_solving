#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

#define debug(...) _f (#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void _f (const char* name, Arg1&& arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void _f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | ";
    _f (comma + 1, args...);
}

void solve(int test_case)
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int maxValue = 0;

    for (int i = 0; i < n; ++i)
    {
        maxValue = max(arr[i],maxValue);
    }

    int sum = 0;

    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];
    }

   // debug(sum,maxValue);

    for (int i = n; i > 0; i--) 
    {
        int temp = (sum + k) / i;

       // debug(temp, i, sum);

        if ((temp*i)>sum-1 and temp>maxValue-1)
        {
            cout << i << endl;
            break;
        }
    }

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
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
    int n;
    cin >> n;
    int arr[n];
    stack<int>same;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int res = 0, alice=0, bob=0;

    for (int left = 0, right = n-1; left<=right+1; )
    {
        //debug(left,alice,right,bob,res);
        if (alice==bob)
        {
            same.push(res);
        }

        if (alice>bob)
        {
            bob+=arr[right];
            right--;
            res++;
        }
        else
        {
            alice+=arr[left];
            left++;
            res++;
        }
    }

    cout << same.top() << endl;
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
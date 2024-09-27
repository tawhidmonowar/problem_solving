#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int maxValue = 0, cnt=0;

    for (int i = 0; i < n; i+=2)
    {
        maxValue = max(arr[i],maxValue);
        cnt++;
    }

    int temp1 = cnt+maxValue;

    maxValue = 0;
    cnt = 0;

    for (int i = 1; i < n; i+=2)
    {
        maxValue = max(arr[i],maxValue);
        cnt++;
    }

    int temp2 = cnt+maxValue;

    cout << max(temp1,temp2) << endl;

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
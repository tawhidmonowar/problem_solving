#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    int n;
    cin >> n;
    int arr[n]={0};
    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;
        for(int j=1; j<=4; j++) 
        {
            if (str[j-1]=='#')
            {
                arr[i]=j;
            }
        }
    }

   // sort(arr,arr+n,greater<int>());
    for (int i = n-1; i>=0; --i)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;
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
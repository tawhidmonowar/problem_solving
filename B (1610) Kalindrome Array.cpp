#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) { cin >> arr[i]; }
    
    int left=0, right=n-1;
    int temp1=-1, temp2=-1;
    bool isPalindromic = true;

    for (; left<right; )
    {
        if (arr[left]!=arr[right])
        {
            temp1 = arr[left];
            temp2 = arr[right];
            isPalindromic = false;
            break;
        }

        left++;
        right--;
    }

    if (isPalindromic)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        vector<int> a, b, c, d;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i]!=temp1)
            {
                a.push_back(arr[i]);
            }
        }

        c = a;
        reverse(c.begin(),c.end());

        if (a==c)
        {
            cout << "YES" << endl;
            return;
        }

        for (int i = 0; i < n; ++i)
        {
            if (arr[i]!=temp2)
            {
                b.push_back(arr[i]);
            }
        }

        d = b;
        reverse(d.begin(),d.end());
        if (d==b)
        {
            cout << "YES" << endl;
            return;
        }

    }

    cout << "NO" << endl;

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
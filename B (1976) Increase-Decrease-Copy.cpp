#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

int cost_f(int a, int b)
{
    int cost = a-b;
    return abs(cost);
}

void solve(int test_case)
{
    int n;
    cin >> n;
    int arr[n];
    int brr[n+1];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n+1; ++i)
    {
        cin >> brr[i];
    }

    int append = brr[n];
    int cost = cost_f(arr[0],append)+1;
    int result = 0;
    bool found = false;

    for (int i = 0; i < n; ++i)
    {
        if (!found)
        {
            if (arr[i]==append || brr[i]==append)
            {
                found = true;
                cost = 1;
            }
            else if ((arr[i]>append && append>=brr[i]) || (arr[i]<append && append<=brr[i]))
            {
                found = true;
                cost = 1;
            }
            else
            {
                if (cost_f(arr[i],append)<=cost_f(brr[i],append))
                {
                    int temp_cost = cost_f(arr[i],append)+1;
                    if (temp_cost<cost)
                    {
                        cost=temp_cost;
                    }
                    
                }
                else
                {
                    int temp_cost = cost_f(brr[i],append)+1;
                    if (temp_cost<cost)
                    {
                        cost=temp_cost;
                    }
                    
                }

            }
        }

        result+=cost_f(arr[i],brr[i]);

    }


    result+=cost;
    cout << result << endl;

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
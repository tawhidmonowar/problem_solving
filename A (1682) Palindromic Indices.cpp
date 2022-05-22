#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int i,n;
        cin >> n;
        string x;
        cin >> x;
        int mid = n/2,res=0;

        for(i=mid;i<n;i++)
        {
            if(x[i]==x[mid])
            {
                res++;
            }
            else
            {
                break;
            }
        }

        for(i=mid-1;i>=0;i--)
        {
            if(x[i]==x[mid])
            {
                res++;
            }
            else
            {
                break;
            }
        }
        cout << res << endl;
    }

    return 0;
}

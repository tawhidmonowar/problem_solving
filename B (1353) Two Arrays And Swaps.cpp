#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin >>n>>k;
    int arrA[n], arrB[n];

    for(int i=0; i<n; i++)
    {
        cin >> arrA[i];
    }

    for(int i=0; i<n; i++)
    {
        cin >> arrB[i];
    }

    sort(arrA,arrA+n);
    sort(arrB,arrB+n,greater<int>());

    for(int i=0; i<k; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arrA[i]<arrB[j])
            {
                arrA[i]=arrB[j];
                arrB[j]=-1;
                break;
            }
        }
    }

    int res=0;

    for(int i=0; i<n; i++)
    {
        res+=arrA[i];
    }

    cout << res << endl;

}

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}
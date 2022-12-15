#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long k,temp=0,mul=0,j=0;
    cin >> k;
    long arr[1010];

    for(long i=1; i<1670; i++)
    {
        if(i%10==0)
        {
            mul++;
        }

        if(i%3!=0 && i!=(mul*10)+3)
        {
            arr[j]=i;
            j++;
        }
    }

    cout << arr[k-1] << endl;

}
int main()
{
    long testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}
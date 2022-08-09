#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/*Author: TawhidMonowar*/
const int MOD = (int)1e9+7;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;
int i,j,k,arr[MAX];

void solve()
{
    int Alice=0,Bob=0,Move=0,n,temp=0;
    int tempA=0,tempB=0;
    cin >> n;
    int first,last;

    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    first = 0;
    last = n-1;

    tempA=arr[first];
    Alice+=tempA;
    first++;
    Move++;

    while(first<=last)
    {
        tempB=0;
        while(tempA>=tempB && first<=last)
        {
            tempB+=arr[last];
            last--;
        }
        Bob+=tempB;
        Move++;

        tempA=0;
        while(tempB>=tempA && first<=last)
        {
            tempA+=arr[first];
            first++;
        }

        Alice+=tempA;
        Move++;
    }

    if(tempA==0)
    {
        Move--;
    }

    cout << Move << " " << Alice <<" " << Bob << endl;
}

int main()
{
    FastRead
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}

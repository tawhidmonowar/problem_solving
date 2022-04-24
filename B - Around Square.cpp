#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long i,n,result=0;
    cin >> n;

    for(i=1; i<=n; i++)
    {
       if(i*i<=n)
       {
           result=max(result,i*i);
       }
    }

    cout << result;

    return 0;
}

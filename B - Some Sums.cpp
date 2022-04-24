#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int i,n,a,b,sum=0;
    cin >> n >> a >> b;

    for(i=1; i<=n; i++)
    {
        int temp=i,x=0,m;
        while(temp>0)
        {
            m=temp%10;
            x=x+m;
            temp=temp/10;
        }

        if(x>=a&&x<=b)
        {
            sum+=i;
        }
    }

    cout << sum;

    return 0;
}

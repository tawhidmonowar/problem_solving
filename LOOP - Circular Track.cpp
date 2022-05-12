#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int a,b,m;
        cin >>a>>b>>m;
        if(a>b)
        {
            cout<<min(a-b,m-a+b)<<endl;
        }
	    else
        {
            cout<<min(b-a,a+m-b)<<endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n,temp=0;
    cin >> n;
    string str;
    cin >> str;

    long zero=0, one=0, oneZeroRes=0;

    for(long i=0; i<n; i++)
    {
        if(str[i]=='0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }

    oneZeroRes = one*zero;

    long zeroSeq=0, oneSeq=0;

    for(long i=0; i<n; i++)
    {
        if(str[i]=='0')
        {
            temp++;
        }
        else
        {
            temp=0;
        }

        if(zeroSeq<temp)
        {
            zeroSeq=temp;
        }
    }

    temp = 0;

    for(long i=0; i<n; i++)
    {
        if(str[i]=='1')
        {
            temp++;
        }
        else
        {
            temp=0;
        }

        if(oneSeq<temp)
        {
            oneSeq=temp;
        }
    }

    long oneSeqRes, zeroSeqRes;

    oneSeqRes = oneSeq*oneSeq;
    zeroSeqRes = zeroSeq*zeroSeq;


    cout << max(oneZeroRes,max(oneSeqRes,zeroSeqRes)) << endl;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}

/**

step:1 count 0 and 1
step:2 count 1 ->
step:3 count 0 ->

**/
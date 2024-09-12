#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

int game(int a, int b) 
{
   if (a>b)
    {
        return 1;
    } 
    else if (a<b)
    {
        return 2;
    }

    return 0;
}


void solve(int test_case)
{
    int a1,a2,b1,b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int a=0,b=0,res=0,temp;

    temp = game(a1,b1);

    if (temp==1)
    {
        a++;
    }
    else if (temp == 2)
    {
        b++;
    }

    temp = game(a2,b2);
    if (temp==1)
    {
        a++;
    }
    else if (temp == 2)
    {
        b++;
    }

    if (a>b)
    {
        res++;
    }

    a=0,b=0;
    temp = game(a1,b2);
    if (temp==1)
    {
        a++;
    }
    else if (temp == 2)
    {
        b++;
    }

    temp = game(a2,b1);
    if (temp==1)
    {
        a++;
    }
    else if (temp == 2)
    {
        b++;
    }

    if (a>b)
    {
        res++;
    }

    cout << res*2 << endl;

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
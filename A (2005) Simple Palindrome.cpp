#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    string v = "aeiou";
    string res = "";
    int n;
    cin >> n;
    int carr = 0;
    int mul = 0;

    if (n<=5)
    {
        for (int i = 0; i < n; ++i) {
            res += v[i % 5];
        }
        cout << res << endl;
        return;
    }
    else
    {
        while(n%5!=0)
        {
            carr++;
            n--;
        }
        if (n%5==0)
        {
            mul = n/5;
        }
    }

    int ac=0,ec=0,ic=0,oc=0,uc=0;

    for (int i = 1; i <= carr; ++i)
    {
        if (i==1)
        {
            ac++;
        }
        else if (i==2)
        {
            ec++;
        }
        else if (i==3)
        {
            ic++;
        }
        else if (i==4)
        {
            oc++;
        }
        else if (i==5)
        {
            uc++;
        }
    }


    ac+=mul;
    ec+=mul;
    ic+=mul;
    oc+=mul;
    uc+=mul;
    
    string a(ac,'a'),e(ec,'e'),i(ic,'i'),o(oc,'o'),u(uc,'u');
    string rrr = a+e+i+o+u;
    cout << rrr << endl;

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
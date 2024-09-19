#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

vector <int> primeSieve(int left, int right)
{
    vector<int>sieve(right,1);
    vector<int>primeNumbers;
    sieve[1] = sieve[0] = 0;
    for (int i=2; i<=sieve.size(); i++)
    {
        if (sieve[i])
        {
            for (int j =i*i; j <=sieve.size(); j=j+i)
            {
                sieve[j]=0;
            }
        }
    }

    for (int i = left; i < sieve.size(); ++i)
    {
        if (sieve[i])
        {
            primeNumbers.push_back(i);
        }
    }

    return primeNumbers;
}

void solve()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;

    vector <int> vect = primeSieve(1,n+1);
    for(auto x:vect)
    {
        cout << x << endl;
    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
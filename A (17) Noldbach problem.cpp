#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;


bool isPrime(int n) {

    if (n <= 1) {
        return false;
    }

    if (n <= 3) {
        return true;
    }

    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

vector<int> primeSieve(int left, int right)
{
    vector<int> primes;
    int sieveArr[right+1] = {0};
    for(long long i=2; i<=right; i++){
        if(sieveArr[i]==0){
            primes.push_back(i);
            for(long long j= i*i; j<=right; j+=i){
                sieveArr[j] = 1;
            }
        }
    }

    vector<int> segment(right-left+1,0);
    vector<int> primeNumbers;
    for(auto p : primes)
    {
        if(p*p > right){break;}
        int start = (left/p) * p;
        if(p>=left and p<=right){
            start = 2 * p;
        }

        for(int j = start; j<=right; j = j + p){
            if(j < left){continue;}
            segment[j - left] = 1;
        }
    }

    for(int i=left; i<=right; i++){
        if(segment[i-left]==0 and i!=1){
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

    int n,k;
    cin >> n >> k;

    vector<int> vect = primeSieve(1,n);
    int prefs[vect.size()]={0};
    prefs[0]=vect[0];
    int count=0;

    for (int i = 1; i < vect.size(); i++)
    {
        prefs[i]=vect[i-1]+vect[i];
    }

    for (int i = 1; i < vect.size(); ++i)
    {
        int temp = prefs[i]+1;
        if (temp>n)
        {
            break;
        }
        if (isPrime(temp))
        {
            count++;
        }
    }

    if (count>=k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
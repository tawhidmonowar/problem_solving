#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

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

    int n,count=0;
    cin >> n;

    vector<int> vect = primeSieve(2,n);

    for (int i = 5; i <=n; i++)
    {
        int j=0;
        int temp=0;

        while(vect[j]<i && j<vect.size())
        {
            if (i%vect[j]==0)
            {
                temp++;
            }

            j++;
        }
        if (temp==2)
        {
            count++;
        }
    }

    cout << count << endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
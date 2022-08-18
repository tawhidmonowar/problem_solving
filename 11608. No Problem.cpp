#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define mod(x,m) ((x%m)+m)%m;
#define pi acos(-1)
/*Author: TawhidMonowar*/
const int MOD = (int)1e9+7;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;

void solve()
{
    int n;
    int testCase=1;
    while(cin >> n && n>=0)
    {
        cout << "Case "<< testCase++ << ":" << endl;
        int monthlyProblems[20];
        int requiredProblems[20];
        int problems=n;
        for(int i=0; i<12; i++)
        {
            cin >> monthlyProblems[i];
        }

        for(int i=0; i<12; i++)
        {
            cin >> requiredProblems[i];
        }


        for(int i=0; i<12; i++)
        {
            if(problems>=requiredProblems[i])
            {
                cout << "No problem! :D" << endl;
                problems-=requiredProblems[i];

            }
            else
            {
                cout << "No problem. :("  << endl;
            }
            problems+=monthlyProblems[i];
        }
    }
}

int main()
{
    solve();
    return 0;
}

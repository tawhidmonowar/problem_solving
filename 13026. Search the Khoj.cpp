#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define pi acos(-1)
/*Author: TawhidMonowar*/
const int MOD = (int)1e9+7;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;

void process(string number, string contact)
{
    int wrongDigit=0;

    for(int i=0; i<number.length(); i++)
    {
        if(wrongDigit>1)
        {
            break;
        }
        else
        {
            if(number[i]==contact[i])
            {
                continue;
            }
            else
            {
                wrongDigit++;
            }
        }
    }

    if(wrongDigit<2)
    {
        cout << contact << endl;
    }
}

void solve(int runingTestCase)
{
    int i,n;
    cin >> n;
    vector<string>vect;

    for(i=0; i<n; i++)
    {
        string temp;
        cin >> temp;
        vect.push_back(temp);
    }

    string number;
    cin >> number;

    cout << "Case " << runingTestCase << ":" << endl;

    for(i=0; i<n; i++)
    {
        process(number,vect[i]);
    }
}

int main()
{
    FastRead
    int testCase,runingTestCase=0;
    cin >> testCase;

    while(testCase--)
    {
        solve(++runingTestCase);
    }

    return 0;
}

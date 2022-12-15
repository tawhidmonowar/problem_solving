#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve(long test_case)
{
    long n;
    cin >> n;
    string str,temp="";
    cin >> str;

    for(long i=0; i<str.length()-1; i++)
    {
        temp+=str[i];
        temp+=str[i+1];

        size_t found = str.find(temp);
        if(found != string::npos)
        {
            found = str.find(temp,found+2);
            if(found != string::npos)
            {
                cout << "YES" << endl;
                return;
            }
        }

        temp="";

    }

    cout << "NO" << endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long testCase;
    cin >> testCase;
    long test_case = testCase;

    while(testCase--)
    {
        solve(test_case-testCase);
    }

    return 0;
}
#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define all(v) v.begin(), v.end()
using namespace std;


int main()
{
    long long testCase;
    cin >> testCase;

    while(testCase--)
    {
        string s;
        cin >> s;
        string B = s;
        reverse(all(s));
        int m = s.length(), num = B.length();
        int x[256];
        
        memset(x, 0, sizeof(x));
        
        for (int i = 0; i < num; i++)
        {
             x[B[i]]++;
        }
           
        for (int i = 0; i < num; i++)
        {
            x[s[i]]--;
        }
        
        int result = 0;
        for (int i = num - 1, j = num - 1; i >= 0;)
        {
            while (i >= 0 && s[i] != B[j])
            {
                i--;
                result++;
            }
            if (i >= 0)
            {
                i--;
                j--;
            }
        }
        cout << result << endl;;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int i,n,res=0;
        cin >> n;
        string s;
        cin >> s;

        for(i=0;i<n;i++)
        {
            if(s[i]=='0'&&s[i+1]=='0')
            {
                res+=2;
            }

            if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')
            {
                res++;
            }
        }

        cout << res << endl;
    }


    return 0;
}

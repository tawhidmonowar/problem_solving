#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int i,j,n,k,temp=0;
        vector<int>vr;
        cin >>n>>k;

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                vr.push_back(i+1&j+1);
            }
        }

        for(i=0; i<vr.size(); i++)
        {
            if(k>vr[i])
            {
                if(temp<vr[i])
                {
                    temp=vr[i];
                }
            }
            else
            {
                break;
            }
        }

        cout << temp << endl;
    }

    return 0;
}

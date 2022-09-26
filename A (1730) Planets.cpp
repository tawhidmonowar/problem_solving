    #include <bits/stdc++.h>
    using namespace std;
     
    void solve()
    {
        int n,c,res=0;
        cin >> n >> c;
        map<int,int>mp;
        int arr[n];
     
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
     
        for(auto x:mp)
        {
            if(x.second<c)
            {
                res+=x.second;
            }
            else
            {
                res+=c;
            }
        }
     
        cout << res << endl;
    }
     
    int main()
    {
        int testCase;
        cin >> testCase;
     
        while(testCase--)
        {
            solve();
        }
     
        return 0;
    }
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
           int i,n,temp=0;
           cin >> n;
           int x[n];
     
           for(i=0;i<n;i++)
           {
               cin >> x[i];
           }
     
           sort(x,x+n);
     
           for(i=1;i<n;i++)
           {
              temp+=x[i]-x[0];
           }
     
           cout << temp << endl;
     
        }
     
        return 0;
    }
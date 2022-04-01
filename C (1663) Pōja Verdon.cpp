    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int n,i,sum=0;
        cin >> n;
        int x[n];
     
        for(i=0; i<n; i++)
        {
            cin >> x[i];
        }
     
        for(i=0; i<n; i++)
        {
            sum+=x[i];
        }
     
        cout << sum;
     
        return 0;
    }
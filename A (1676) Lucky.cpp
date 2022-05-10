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
            string x;
            cin >> x;
            int temp1=0,temp2=0;
     
            temp1+=(int)x[0]-48;
            temp1+=(int)x[1]-48;
            temp1+=(int)x[2]-48;
     
            temp2+=(int)x[3]-48;
            temp2+=(int)x[4]-48;
            temp2+=(int)x[5]-48;
     
            if(temp1==temp2)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
     
        return 0;
    }
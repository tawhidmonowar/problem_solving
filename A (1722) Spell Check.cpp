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
    int i,j,k,arr[MAX];
     
    void solve()
    {
        int inputStrLength;
        cin >> inputStrLength;
        string inputStr;
        cin >> inputStr;
        set<char> m1,m2;
     
        m1.insert('T');
        m1.insert('i');
        m1.insert('m');
        m1.insert('u');
        m1.insert('r');
     
        if(inputStrLength==5)
        {
            m2.insert(inputStr[0]);
            m2.insert(inputStr[1]);
            m2.insert(inputStr[2]);
            m2.insert(inputStr[3]);
            m2.insert(inputStr[4]);
     
            if(m1==m2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
     
    }
     
     
    int main()
    {
        FastRead
        int testCase;
        cin >> testCase;
     
        while(testCase--)
        {
            solve();
        }
     
        return 0;
    }
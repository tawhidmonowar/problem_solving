    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int testCase;
        cin >> testCase;
     
        while(testCase--)
        {
            int a,b;
            cin >> a >> b;
     
            if(!a)
            {
                cout << 1 << endl;
            }
            else if(!b)
            {
                cout << a+1 << endl;
            }
            else
            {
                cout << a+(b*2)+1 << endl;
            }
        }
     
        return 0;
    }
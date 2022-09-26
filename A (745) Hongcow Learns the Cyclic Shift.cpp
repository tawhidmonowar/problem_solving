    #include <bits/stdc++.h>
    using namespace std;
     
    void solve()
    {
        string str;
        cin >> str;
        set<string>st;
        st.insert(str);
     
        for(int i=0; i<str.length();i++)
        {
            string temp;
            temp = str[0];
            str.erase(0, 1);
            str+=temp;
            st.insert(str);
        }
     
        cout << st.size() <<endl;
     
     
    }
     
    int main()
    {
        solve();
    }
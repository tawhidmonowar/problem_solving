#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

vector<string> times;

void generate() 
{
    for (int hour = 0; hour < 24; ++hour)
    {
        for (int minute = 0; minute < 60; ++minute)
        {
            string temp_hour = (hour < 10 ? "0" : "") + to_string(hour);
            string temp_minute = (minute < 10 ? "0" : "") + to_string(minute);
            times.push_back(temp_hour + ":" + temp_minute);
        }
    }
}


bool isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());

    if (S == P) 
    {
        return true;
    }
    else 
    {
        return false;
    }
}

void solve(int test_case) 
{
    string str;
    cin >> str;
    int x;
    cin >> x;

    int res = 0;
    auto found = find(times.begin(),times.end(),str);
    int time = found - times.begin();

    set<int>st;
    for (int i = 0; i < 2022; i++) {
        st.insert(time);
        time += x;
        time %= 1440;   
    }

    for(auto x: st)
    {
        if (isPalindrome(times[x]))
        {
            res++;
        }
    }

    cout << res << endl;
  
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    generate();
    int testCase;
    cin >> testCase;
    int test_case = testCase;

    while(testCase--)
    {
        solve(test_case-testCase);
    }

    return 0;
}
#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

vector<string> time_24hr_format;

void time_24() 
{
    for (int hour = 0; hour < 24; ++hour)
    {
        for (int minute = 0; minute < 60; ++minute)
        {
            string formatted_hour = (hour < 10 ? "0" : "") + to_string(hour);
            string formatted_minute = (minute < 10 ? "0" : "") + to_string(minute);
            time_24hr_format.push_back(formatted_hour + ":" + formatted_minute);
        }
    }
}

void solve()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    time_24();
    string str;
    cin >> str;
    int min;
    cin >> min;

    auto found = find(time_24hr_format.begin(),time_24hr_format.end(),str);
    int pos = found - time_24hr_format.begin();

    int total_min = pos+min;

    if ((pos+min)>=time_24hr_format.size())
    {
        cout << time_24hr_format[total_min%time_24hr_format.size()] << endl;
    }
    else
    {
        cout << time_24hr_format[pos+min] << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
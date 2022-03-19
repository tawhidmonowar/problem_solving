#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#define loop(a,b) for(a;a<b;a++)
using namespace std;

int main()
{
    int i,n;
    cin >> n;
    string name,number,key;
    map<string,string> pb;
    
    i=0;
    loop(i,n)
    {
        cin >> name >> number;
        pb[name]=number;
    }
    
    while(cin>>key)
    {
        if(pb.find(key)!=pb.end())
        {
            cout << key << "=" << pb.find(key)->second<<endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}

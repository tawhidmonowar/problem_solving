#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    getline(cin, S);
    int n;
    
    try{
        n = stoi(S);
        cout << n;
    }catch (...) {
        cout << "Bad String";
   } 
    
    return 0;
}

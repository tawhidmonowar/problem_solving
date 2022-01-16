#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <iomanip>  
using namespace std;

int main() {
    
    int a;
    long int b;
    char c;
    float d;
    double e;
    
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    cout << fixed << showpoint;  
    cout << setprecision(3);
    
    cout << d << endl;
    cout << setprecision(9);
    cout << e << endl;
    

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    int emptySeats, passengersWaiting;
    cin >> passengersWaiting;
    emptySeats = 50-(passengersWaiting%50);
    cout << emptySeats;

    return 0;
}

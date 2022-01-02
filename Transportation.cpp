#include <iostream>
using namespace std;

int main() {

    int emptySeats,passengersWaiting;
    cin >> passengersWaiting;

    cout << 50-(passengersWaiting%50);

    return 0;
}

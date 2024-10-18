#include <iostream>
#include <string>

using namespace std;

int main() {
    int hour;

    cout << "Current Time(0-23): ";
    cin >> hour;

    if(hour >= 8 && hour <= 18) {
        cout << "Shop Open.";
    } else {
        cout << "Shop Closed.";
    }

    return 0;
}
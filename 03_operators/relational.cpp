#include <iostream>

using namespace std;

int main() {
    int numberOfCups;

    cout << "How many cups do you have? ";
    cin >> numberOfCups;

    if(numberOfCups >= 20) {
        cout << "You're Eligible for Gold badge.";
    } else if(numberOfCups >= 10 && numberOfCups < 20) {
        cout << "U got silver badge.";
    } else {
        cout << "U got nothing.";
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    bool isStudent;
    int numberOfcups;

    cout << "Are you a student (1 for yes and 0 for No) ? ";
    cin >> isStudent;
    cout << "Cups you have purchased ? ";
    cin >> numberOfcups;

    if (isStudent || numberOfcups >= 15) {
        cout << "You're elegible for discount.";
    } else {
        cout << "You're not elegible for discount.";

    }

    return 0;
}


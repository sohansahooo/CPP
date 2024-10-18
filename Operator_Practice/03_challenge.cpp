#include <iostream>

using namespace std;

int main() {
    int totalCups;
    float memberSince;

    cout << "How many cups do you bought? : ";
    cin >> totalCups;

    cout << "You're a member since how many year?: ";
    cin >> memberSince;

    if(totalCups >= 12 || memberSince > 1) {
        cout << "You got a discount";
    } else {
        cout << "Sorry you're not eligible for the discount.";
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int teaPacks;
    int price = 30;

    cout << "How many tea packs do you want? ";
    cin >> teaPacks;

    int total = price * teaPacks;


    if (total > 0) {
        double tax = total * 0.10;
        double finalAmount = total + tax;
        cout << "Your total is: $" << finalAmount;
    } else {
        cout << "You can't buy negative tea packs!";
    }

    return 0;
}
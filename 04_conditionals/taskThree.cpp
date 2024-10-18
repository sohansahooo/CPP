#include <iostream>
#include <string>

using namespace std;

int main() {
    int order;
    double price = 10, totalPrice, discount;

    cout << "Total order: ";
    cin >> order;

    totalPrice = order * price;

    if(order > 20) {
        discount = 0.20;
    } else if(order >= 10 && order <= 20) {
        discount = 0.10;
    } else {
        discount = 0;
    }

    totalPrice -= (totalPrice * discount);

    cout << "Final Price: $" << totalPrice;

    return 0;
}
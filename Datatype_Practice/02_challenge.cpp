#include <iostream>

using namespace std;

int main() {
    float priceOfTea = 12.99;
    int Quantity = 2;

    float totalPrice = priceOfTea * Quantity;
    float discountAmount = totalPrice * 0.10;
    float finalAmount = totalPrice - discountAmount;

    cout << "Your Total Price was: $" << totalPrice << "\n";
    cout << "After a Discount of 10%, you saved: $" << discountAmount << "\n";
    cout << "Your Final Amount is: $" << finalAmount << "\n";

    return 0;
}

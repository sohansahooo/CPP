#include <iostream>

using namespace std;

int main() {

    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice;

    int TeaQuantity = 2;
    double totalPrice = teaPrice * TeaQuantity;

    cout << totalPrice << endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    string favTea;
    int quantity;

    cout << "Your favorite tea? ";
    getline(cin, favTea);

    cout << "How many cup? ";
    cin >> quantity;

    cout << "Here's your " << quantity << " cups of " << favTea;

    return 0;
}
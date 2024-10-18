#include <iostream>
#include <string>

using namespace std;

int main() {
    string teaType = "Lemon Tea";
    float pricePerKg = 99.69;
    char teaRating = 'A';

    cout << "\"" << teaType << "\" is a " << teaRating << " grade tea.\n";
    cout << "The price per kilogram is $" << pricePerKg << ".\n";
    
    return 0;
}
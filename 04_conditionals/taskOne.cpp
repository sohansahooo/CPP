#include <iostream>
#include <string>

using namespace std;

int main() {
    string teaType;

    cout << "What would you like to order? :";
    getline(cin, teaType);  // 'cin << teaType' not run but, why?

    if(teaType == "Green Tea") {
        cout << "You order in the way.";
    }

    return 0;
}
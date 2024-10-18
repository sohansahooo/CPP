#include <iostream>

using namespace std;

int main() {
    int teaBag;

    cout << "How many tea bag do you have? " << endl;
    cin >> teaBag;

    // if (teaBag < 10) {
    //     teaBag += 5;
    //     cout << "Take it & Now you have " << teaBag  << endl;
    // } else {
    //     cout << "You have enough tea bags" << endl;
    // }

    // One logical approach
    if (teaBag < 10) {
        teaBag += 5;
    }
    cout << "Your total bags are: " << teaBag;

    return 0;
}
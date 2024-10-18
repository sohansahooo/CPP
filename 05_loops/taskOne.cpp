#include <iostream>

using namespace std;

int main(){
    int teaCups;

    cout << "How many cups do you need? : ";
    cin >> teaCups;

    while (teaCups > 0) {
        teaCups--;
        cout << "You have " << teaCups << " cups of tea left.\n";
    }

    cout << "All tea cups are served.";

    return 0;
}
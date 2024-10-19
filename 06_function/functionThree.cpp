#include <iostream>

using namespace std;

/* Here we learn pass by reference(original change). */

void pourChai(int &cups){
    cups += 5;
    cout << "Poured Cups: " << cups << endl;
}

int main(){
    int cups = 2;
    pourChai(cups);
    cout << "Total Cups: " << cups << endl;
    return 0;
}
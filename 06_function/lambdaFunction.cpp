#include <iostream>

using namespace std;

int main(){

    // lambda (function that doesn't have a name itself & only use once.)
    auto chai = [](int cups){
        cout << "Preparing " << cups << " cups of tea" << endl;
    };

    chai(4);

    return 0;
}
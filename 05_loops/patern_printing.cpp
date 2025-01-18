#include <iostream>

using namespace std;
/*
void pattern1(int n){
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;   // it creates line end in each loop
    }
}
*/

void pattern2(int n){
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;   // it creates line end in each loop
    }
}

int main(){
    // test case
    int t;
    cout << "Give a number: ";
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        pattern2(n);
    }

    // return 0;
}
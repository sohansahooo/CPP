#include <iostream>
#include <string>
using namespace std;
int main(){
    
    string teaTypes[3] = {"Green Tea", "Black Tea", "Lemon Tea"};

    for(int i = 0 ; i < 3 ; i++){
        if(teaTypes[i] == "Green Tea"){
            cout << "Skipping " << teaTypes[i] << endl;
            continue;
        }

        cout << "Brewing " << teaTypes[i] << "..." << endl;
    }
    return 0;

}
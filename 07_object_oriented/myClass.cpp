#include <iostream>
#include <vector>

using namespace std;

class Tea {
    // data members (attributes)
    string name; // tea name
    int price;  // price
    vector<string> ingredients  // list of ingredients

    // Member function
    void teaDetails(){
        cout << "Tea Name: " << name << endl;
        cout << "Price: " << name << endl;
        cout << "Ingredients: ";
        for(string ingredient : ingredients){
            
        }
    }
};


int main(){

    return 0;
}
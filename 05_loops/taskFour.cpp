#include <iostream>
#include <string>
using namespace std;
int main(){    
    string response;

    while(true){
        cout << "Do you want more tea ('stop' for exit)?: ";
        getline(cin, response);

        if(response == "stop"){
            break;  //exit the loop
        }
        cout << "Here is your another cup of tea. \n";
    }
    cout << "No more tea will be served to you.";
    return 0;
}
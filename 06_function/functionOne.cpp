// returnType functionName(parameters){
//     // function body

// }
// void
#include <iostream>

using namespace std;

int checkTemp(int temperature){
    return temperature;
}

// function declaration
void serve(int plates);

void makeChai(){
    cout << "Making Chai. \n";
}

void serve(string teaType = "Default Normal"){
    cout << "Serving " << teaType << " Tea. \n";
}

int main(){
    int temp = checkTemp(36);
    cout << temp << "\n";
    makeChai(); // function call
    serve();    // function call with default params
    serve(5);   // func call with an args, which is actual params
    return 0;
}

// function defination
void serve(int plates){
    cout << "Serving " << plates << " plates of pomfret fish fry.";
}

/* One other type of function overloading
void serve(int cup, int leaves){
    
}
*/


/* NOTE:
function name can can be same, which is called function overloading.
 */
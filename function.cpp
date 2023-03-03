#include <iostream>
using namespace std;

void sayHello(){
    cout << "Hello C++\n";
}

//default / optional parameter
//void sayHello(string lang = "C++"){
//overloading
void sayHello(string lang){
    cout << "Hello " << lang << " language\n";
}

int main(){
    sayHello();
    sayHello("Javascript");
    sayHello("Go");
    sayHello("Rust");
    return 0;
}

//Error: sayHello was not declared in this scope
//function have to be located above main()
// void sayHello(){
//     cout << "Hello C++\n";
// }
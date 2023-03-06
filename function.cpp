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

int doSum(int x, int y){
    return x + y;
}

int doSum(int x){
    return x + 5;
}

//pass by reference
void swapNums(int &x, int &y){ //3, 5
    int z = x; //z = 3
    x = y; //&x = 5
    y = z; //&y = 3
}

//array as function parameter
void loopArray(int myNums[5]){
    for(int i = 0; i < 5; i++){
        cout << myNums[i] << "\n";
    }
}

//function overloading
int plusFuncInt(int x, int y){
    return x + y;
}
double plusFuncDouble(double x, double y){
    return x + y;
}
int plusFunc(int x, int y){
    return x + y;
}
double plusFunc(double x, double y){
    return x + y;
}

//recursive
int sumup(int k){
    if (k > 0){
        return k + sumup(k-1);
    } else {
        return 0;
    }
}

int main(){
    sayHello();
    sayHello("Javascript");
    sayHello("Go");
    sayHello("Rust");
    int sum = doSum(5, 7);
    cout << sum << "\n";
    int singleSum = doSum(8);
    cout << singleSum << "\n";
    //pass by refenrece swap number before and after
    int firstNum = 3;
    int secondNum = 5;
    cout << "Before swap:\n";
    cout << firstNum << ", " << secondNum << " \n";
    swapNums(firstNum, secondNum);
    cout << "After swap:\n"; 
    cout << firstNum << ", " << secondNum << " \n";

    //loop array
    int a[5] = {10, 20, 30, 40, 50};
    loopArray(a);

    //function overloading
    cout << "Function overloading\n";
    cout << plusFuncInt(11, 22) << "\n";
    cout << plusFuncDouble(4.3, 2.99) << "\n";
    //same function name but different parameter and return type
    cout << "Same function by different return type and paramter\n";
    cout << plusFunc(8, 5) << "\n";
    cout << plusFunc(5.5, 7.3) << "\n";
    //c++ having its own auto type conversion with number 
    //for different data type (int, double)

    cout << "Recursion " << sumup(10) << "\n";

    return 0;
}

//Error: sayHello was not declared in this scope
//function have to be located above main()
// void sayHello(){
//     cout << "Hello C++\n";
// }
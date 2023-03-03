#include <iostream>
#include <string>
using namespace std;

int main(){
    int aint = 7, bint = 10, cint = 18;
    int a, b, c;
    a = b = c = 1001;
    int qty = 5;
    double price = 24.90;
    char currency = '$';
    string product = "Dead Bottle";
    bool isProduct = true;
    double total = qty * price;

    cout << "I want to purchase " << qty << " of " << product << " each at selling price of " << currency << price;
    cout << "Are you sure? " << isProduct << endl;
    cout << "Total is " << total;
    cout << "Multiple variable " << aint << bint << cint << endl;
    cout << "Single value multiple variable " << a << b << c << endl;

    //for numeric data type
    int myInt = 1000;
    cout << myInt << endl;
    float myFloat = 5.75;
    cout << myFloat << endl;
    double myDouble = 19.99;
    cout << myDouble << endl;
    //scientic number
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << endl;
    cout << d1 << endl;

    //char data type
    char myChar = 'B';
    cout << myChar << endl;

    char ca = 65, cb = 67;
    cout << ca << endl;
    cout << cb << endl;

    return 0;
}
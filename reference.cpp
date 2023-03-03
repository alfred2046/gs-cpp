#include <iostream>
using namespace std;

int main(){
    string food = "Burger";
    string &meal = food; //reference
    cout << food << "\n"; //burger
    cout << meal << "\n"; //burger - read from memory
    food = "Rice"; //update the memory
    cout << food << "\n"; //rice
    cout << meal << "\n"; //rice
    meal = "Mee";
    cout << food << "\n"; //mee
    cout << meal << "\n"; //mee
    
    //memory address
    cout << &food << "\n"; // 0x73fde0
    cout << &meal << "\n"; // 0x73fde0
    
    // program to read data from memory address
    // https://github.com/radii/devmem2

    //pointer - variable of memory address
    string* ptr = &food;
    string* ptr2 = &meal;
    cout << ptr << "\n";
    cout << ptr2 << "\n";
    //dereference
    cout << *ptr << "\n";
    cout << *ptr2 << "\n";

    // modify pointer value
    *ptr2 = "Hamburger";
    cout << *ptr << "\n";
    cout << *ptr2 << "\n";
    cout << food << "\n";

    return 0;
}
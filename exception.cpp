#include <iostream>
using namespace std;

int main(){
    
    //try catch block with throw exception
    try {
        int age = 15;
        if (age >= 18){
            cout << "Access granted";
        } else {
            throw(age);
        }
    }catch(int _age){
        cout << "Access denied - you must at least 18 years old";
        cout << "You age is " << _age << "\n";
    }

    //try catch throw without knowing its type
    try {
        int age = 15;
        if (age >= 18){
            cout << "Access granted";
        } else {
            throw 505;
        }
    }catch(...){ //handle any type of exception
        cout << "Access denied - you must at least 18 years old";
    }


    return 0;
}
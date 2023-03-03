#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int y = 29;
    if (x > y) {
        cout << "x is greater than y\n"; 
    } else {
        cout << "y is greater than x\n";
    }

    int time = 20;
    if (time < 10){
        cout << "Good morning!\n";
    } else if(time < 20){
        cout << "Good day\n";
    } else {
        cout << "Good evening\n";
    }

    //ternary operator
    string result = (time < 20) ? "Good day" : "Good Evening";
    cout << result << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(){
    //string
    string greet = "Hello!";
    cout << greet << endl;

    string fname = "John";
    string lname = "Cusack";
    string mName = "II";
    string full = fname + " " + lname;
    cout << full << endl;

    string sAppend = fname.append(mName).append(lname);
    cout << sAppend << endl;

    //adding string + number
    string aString = "10";
    int aNumber = 20;
    //string sumUp = aString + aNumber; //compile error when string + number
    //cout << sumUp;

    string oneLineString = "This is one liner!";
    cout << "Get one liner length() " << oneLineString.length() << endl;
    //or using .size()
    cout << "Using size() alias of length() " << oneLineString.size() << endl;

    string hello = "Hello!";
    cout << hello[0] << endl;
    hello[0] = 'K';
    cout << hello << endl;

    return 0;
}
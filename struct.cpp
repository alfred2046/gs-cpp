#include <iostream>
using namespace std;

int main(){
    struct {
        int myNum;
        string myString;
    } myObject;
    myObject.myNum = 1;
    myObject.myString = "Hi, I'm Object!";
    cout << myObject.myNum << "\n";
    cout << myObject.myString << "\n";

    //struct with multiple variable
    struct {
        string brand;
        string model;
        int year;
    } car1, car2;

    car1.brand = "Tesla";
    car1.model = "YII";
    car1.year = 2023;

    car2.brand = "Cybertruck";
    car2.model = "AZ";
    car2.year = 2024;

    cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
    cout << car2.brand << " " << car2.model << " " << car2.year << "\n";

    //named structure
    struct robot {
        int id;
        string alias;
    };

    robot myHomeRobot;
    myHomeRobot.id = 123;
    myHomeRobot.alias = "Xiao Bai";
    robot myPlayRobot;
    myPlayRobot.id = 444;
    myPlayRobot.alias = "Ding Dong";

    cout << myHomeRobot.id << " " << myHomeRobot.alias << "\n";
    cout << myPlayRobot.id << " " << myPlayRobot.alias << "\n";
    

    return 0;
}
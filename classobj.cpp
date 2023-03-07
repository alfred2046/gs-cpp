#include <iostream>
using namespace std;

class Car {
    public:
        string brand;
        string model;
        string color;
        int year;
        //method define inside class
        void horn(){
            cout << brand << " is horn!\n";
        }
        //method declare here
        void brake();
        int maxSpeed(int maxSpeed);
};

//method define outside class
void Car::brake(){
    cout << brand << " is brake!\n";
}

int Car::maxSpeed(int maxSpeed){
    cout << brand << " have max speed of " << maxSpeed << "\n";
    return maxSpeed;
}

//class constructor
class Autonomy{
    public:
        string name;
        int weight;
        Autonomy(string name, int kg){
            cout << "Autonomy init\n";
            name = name;
            weight = kg; //if kg = kg << the output of .kg become "4200890"
            cout << "Name " << name << ", " << weight << "kg\n";
        }
};

class AIBot{
    int dob; //private attribute
    public:
        int tall;
        string label;
        AIBot(int height, string name);
    private: //private access specifier
        string uuid; //private attribute
};

//constructor define outside
AIBot::AIBot(int height, string name){
    tall = height; //tall = tall will become other value
    label = name;
}


int main(){
    Car tesla;
    tesla.brand = "Tesla";
    tesla.model = "Y";
    tesla.color = "Red";
    tesla.year = 2023;
    tesla.horn();
    tesla.brake();
    tesla.maxSpeed(270);

    Car kia;
    kia.brand = "KIA";
    kia.model = "RIO";
    kia.year = 2020;
    kia.color = "Blue";
    kia.horn();
    kia.brake();
    kia.maxSpeed(230);

    cout << tesla.brand << " " << tesla.model << ", " << tesla.color << ", " << tesla.year << "\n";
    cout << kia.brand << " " << tesla.model << ", " << tesla.color << ", " << tesla.year << "\n";

    cout << "Init Class with Contructor\n";
    Autonomy autoCls("Karl", 70);
    cout << autoCls.weight << endl;
    cout << "Autonomy name " << autoCls.name << " with weight of " << autoCls.weight << "kg\n";

    AIBot aiBot(182, "ChatGPT");
    cout << aiBot.tall << " " << aiBot.label << "\n";
    return 0;
}



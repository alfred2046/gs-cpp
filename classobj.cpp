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

int main(){
    Car tesla;
    tesla.brand = "Tesla";
    tesla.model = "Y";
    tesla.color = "Red";
    tesla.year = 2023;
    tesla.horn();
    tesla.brake();
    tesla.maxSpeed(250);

    Car kia;
    kia.brand = "KIA";
    kia.model = "RIO";
    kia.year = 2020;
    kia.color = "Blue";
    kia.horn();
    kia.brake();
    kia.maxSpeed(220);

    cout << tesla.brand << " " << tesla.model << ", " << tesla.color << ", " << tesla.year << "\n";
    cout << kia.brand << " " << tesla.model << ", " << tesla.color << ", " << tesla.year << "\n";
    return 0;
}



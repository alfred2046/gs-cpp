#include <iostream>
using namespace std;

//base class
class Employee{
    private:
        int salary;
    public:
        string oneLiner = "Secret Agent";
        void setSalary(int s);
        int getSalary();
};

void Employee::setSalary(int s){
    salary = s;
}
int Employee::getSalary(){
    return salary;
}

//inherit using :
//class inaccessible after inherit
//solution: add "public" infront of the class name
class RoleEmployee: public Employee {
    public:
        string designation = "Manager";
};


//multilevel inheritance
class Base {
    public:
        void doCall(){
            cout << "Calling from Base...\n";
        }
};
//derived class (child)
class Child: public Base{};
//derived class (grand child)
class GrandChild: public Child{};

//c++ allow multiple inherite while java doesn't allow (extends only 1 class)
class Male {
    public:
        bool isMale = true;
        void hardwork(){
            cout << "i can do hardwork\n";
        }
};
class Female {
    public:
        bool isFemale = true;
        void softwork(){
            cout << "i can do softwork\n";
        }
};
class WhoAmI: public Male, public Female{};

int main(){
    Employee alan;
    alan.setSalary(10000);
    int currentSalary = alan.getSalary();
    cout << "Alan current salary " << currentSalary << "\n";

    RoleEmployee mgr;
    
    mgr.setSalary(25000);
    cout << mgr.designation << ", " << mgr.getSalary() << "\n";
    cout << mgr.oneLiner << "\n";

    GrandChild gc;
    gc.doCall();

    WhoAmI wai;
    wai.hardwork();
    wai.softwork();


    return 0;
}
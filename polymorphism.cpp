#include <iostream>
using namespace std;

class Animal{
    public:
        void animalSound(){
            cout << "the animal make a sound\n";
        }
};

class Pig: public Animal{
    public:
        void animalSound(){
            cout << "the pig say: wee wee\n";
        }
};

class Dog: public Animal{
    public:
        void animalSound(){
            cout << "the dog say: wow wow\n";
        }
};

int main(){
    Animal animal;
    Pig pig;
    Dog dog;
    animal.animalSound();
    pig.animalSound();
    dog.animalSound();
    return 0;
}
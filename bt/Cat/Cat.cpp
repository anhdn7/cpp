#include <iostream>

using namespace std;

class Cat {
    private:
        string name;
        int age;
        string color;
    public:
        Cat(){
            cout << "Default constructor" << endl;
            this->name = "";
            this->age = 0;
            this->color = "";
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Color: " << color << endl;
        }
        void makeSound(){
            cout << "Meow" << endl;
        }
};
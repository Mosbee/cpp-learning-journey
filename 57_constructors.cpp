#include <iostream>

using namespace std;

class Car{
    public:
        string make;
        string model;
        int year;
        string color;
    Car(string make, string model, int year, string color)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }

};

int main() {
    //constructor =  special method that is automatically called when an object is instantiated
	//                      useful for assigning values to attributes as arguments

    Car car1("Cheverolet", "Mustang", 2025, "Yellow");
    Car car2("Mercedes", "G Wagon", 2026, "Black");


    cout << car1.make << '\n';
    cout << car1.model << '\n';
    cout << car1.year << '\n';
    cout << car1.color << '\n';

    cout <<'\n';

    cout << car2.make << '\n';
    cout << car2.model << '\n';
    cout << car2.year << '\n';
    cout << car2.color << '\n';
    return 0;
}
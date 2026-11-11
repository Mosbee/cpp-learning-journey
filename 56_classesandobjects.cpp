#include <iostream>

using namespace std;

class CAR   
{
    public:
    string model;
    int year;
    string color;
    void accelerate()
    {
        cout <<"This car is accelerating!\n";
    }
    void brake()
    {
        cout <<"This car is braking\n";
    }
};
int main() {
    CAR car1;
    car1.model = "Mustang";
    car1.year = 2025;
    car1.color = "Pink";

    cout << car1.model << ' ';
    cout << car1.year << ' ';
    cout << car1.color << '\n';
    car1.accelerate();
    car1.brake();
    return 0;
}
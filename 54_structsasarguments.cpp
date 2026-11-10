#include <iostream>

using namespace std;

struct Cars
{
    string model;
    int year;
    string color;
};

void printCar(Cars &car);
void paintCar(Cars &car, string color);

int main() {
    Cars car1;
    car1.model = "Sorento";
    car1.year = 2020;
    car1.color = "Grey";

    Cars car2;
    car2.model = "Class A";
    car2.year = 2019;
    car2.color = "Black";

    cout << &car1 << '\n';

    printCar(car1);
    paintCar(car1, "Baby pink");
    printCar(car1);
}
void printCar(Cars &car)
{
    cout << &car << '\n';
    cout << car.model << '\n';
    cout << car.year << '\n';
    cout << car.color << '\n';
}
void paintCar(Cars &car, string color)
{
    car.color = color;
}
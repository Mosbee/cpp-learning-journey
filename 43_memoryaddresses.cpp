#include <iostream>
using namespace std;
int main ()
{
    // memory address = a location where data is stored 
    // a memory address can be accessed with & (address-of operator)

    string name = "Mosbee";
    int age = 20;
    bool student = true;

    cout << &name << " " << &age << " " << &student;

    return 0;
}
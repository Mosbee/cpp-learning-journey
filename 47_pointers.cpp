#include <iostream>
using namespace std;
int main ()
{
    // pointers = variable that stores a memory address of another variable
    //            sometimes it's easier to work with an address 

    // & address-of operator
    // * dereference operator
    string name = "Mosbee";
    int age = 20;
    string freePizzas[] = {"Pizza 1", "Pizza 2", "Pizza 3"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas;
    cout << *pName << '\n';
    cout << *pAge << '\n';
    cout << *pFreePizzas << '\n';

    return 0;

}
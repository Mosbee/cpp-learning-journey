#include <iostream>
using namespace std;
void print(string name, int age);
int main ()
{
    // const parameter = parameter that is effectively read-only
    //                   conveys intent & code is more secure
    //                   useful for pointers and references
    string name = "Mosbee";
    int age = 20;
    print(name, age);


    return 0;
}
void print(const string name, const int age)
{
    // name = " ";
    // age = 0;
    cout << name << '\n';
    cout << age << '\n';
}
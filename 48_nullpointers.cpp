#include <iostream>

using namespace std;

int main() {

    int *p = nullptr;
    int x = 123;

    p = &x;

    if (p == nullptr)
    {
        cout << "The pointer is not pointing";
    }else{
        cout << "The pointer is pointing at: " << p << " \nAnd its value is: "<< *p;
    }

    return 0;
}
#include <iostream>

using namespace std;

enum Day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main() {
    //  enums = a user-defined data type that consists 
    //                  of paired named-integer constants.
    //                 GREAT if I have a set of potential options
    Day day = Wednesday;
    switch (day)
    {
    case 0:
        cout << "Today is sunday";
        break;

    case 1:
        cout << "Today is monday";
        break;
    case 2:
        cout << "Today is tuesday";
        break;
    case 3:
        cout << "Today is Wednesday";
        break;
    case 4:
        cout << "Today is Thursday";
        break;
    case 5:
        cout << "Today is Friday";
        break;
    case 6:
        cout << "Today is Saturday";
        break;
    return 0;
}
}
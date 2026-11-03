#include <iostream>
using namespace std;
int main ()
{
    //string names[] = {"Mbappe", "Messi", "Neymar"};
    int height[]= {172, 183, 169};
    for (int tall : height)
    {
        cout << tall << '\n';
    }
    return 0;
}

// Basically what to do for each element of the iterable data set
// In this example for every element of height cout it's value that we called tall
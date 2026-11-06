#include <iostream>
using namespace std;
void swap(string &x, string &y);
int main ()
{
    string x = "coffee";
    string y = "tea";

    swap(x, y);

    cout <<"X: "<< x << '\n' << "Y: " << y;

    return 0;
}
void swap(string &x, string &y)
{
    string temp = x;
    x = y;
    y = temp;
}
#include <iostream>
#define PI 3.14159
using namespace std;

class shape
{
    public: 
    double area;
    double volume; 
};
class cube : public shape
{
    public:
    cube(double side)
    {
        area = side * side;
        volume = side * side * side;
    }
};
class sphere : public shape
{
    public:
    sphere(double radius)
    {
        area = 4 * PI * radius * radius;
        volume = PI * radius * radius * radius * 4.0/3;
    }
};

int main() {
    cube cube1(10);
    sphere sphere1(5);
    cout << cube1.area << '\n';
    cout << cube1.volume << '\n';
    cout << sphere1.area << '\n';
    cout << sphere1.volume << '\n';

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int const SIZE = 150;
    string foods[SIZE];
    fill(foods, foods + SIZE / 3, "pizza");
    fill(foods + SIZE / 3, foods + SIZE *2/3, "hotdog");
    fill(foods + SIZE * 2 / 3, foods + SIZE, "hamburger");
    for(string food : foods)
    {
        cout << food << '\n';
    }
}
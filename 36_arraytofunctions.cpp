#include <iostream>
using namespace std;
double getTotal(double prices[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total +=prices[i];
    }
    return total;
    
};
int main ()
{
    double prices[] = {12.99, 19.99, 79.69, 87.69};
    int size = sizeof(prices)/sizeof(double);
    double total = getTotal(prices, size);
    cout << total;
    return 0;
}

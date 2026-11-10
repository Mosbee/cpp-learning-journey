#include <iostream>

using namespace std;

int main() {
    char *pGrades = nullptr;
    int size;
    pGrades = new char[size];
    cout << "How many grades are you willing to enter: ";
    cin >> size;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter grade #"<< i + 1 << ": ";
        cin >> pGrades[i];
    }
    for(int i = 0; i < size; i++)
    {
        cout << pGrades[i];
    }
    delete[] pGrades;
    return 0;
}
#include <iostream>
using namespace std;
int searchArray (string array[], int size, string student)
{
    for(int i = 0; i < size; i++)
    {
        if (array[i] == student)
            return i;
    }
    return -1;

}
int main ()
{
    string students[] = {"Messi", "Neymar", "Mbappe", "Ben Halib", "Chouche3"};
    int index;
    string student;
    int size = sizeof(students)/sizeof(string);
    cout << "Enter the student's name : ";
    getline(cin, student);
    index = searchArray (students, size, student);
    if (index != -1)
        cout << "The student's number is : 202533013" << index;
    else
        cout << "The name you entered is not a student";
    return 0;
}
#include <iostream>
using namespace std;
void sortArray(int array[], int size);
int main ()
{
    int array[] = {5, 3, 7, 4, 8, 1, 2, 6, 10, 9};
    int size = sizeof(array)/ sizeof(int);
    sortArray(array, size);
    for (int element : array)
    {
        cout << element << " ";
    }

}
void sortArray(int array[], int size)
{
    int temp;
    for (int i = 0; i < size -1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array [j] = array [j + 1];
                array [j + 1] = temp;
            }
            
        }
    }
}

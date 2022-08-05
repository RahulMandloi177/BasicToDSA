#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array";
    cin >> size;
    int arr[size];

    cout << "Enter the elements of array";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int i, j;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1] - (arr[j + 1] = arr[j]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
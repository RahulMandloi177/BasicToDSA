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
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j <= size; j++)
        {
            if (arr[j] < arr[i])
            {
                arr[j]=arr[i]+arr[j]-(arr[i]=arr[j]);
                       
                       
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}
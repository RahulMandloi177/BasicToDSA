#include <iostream>
using namespace std;

void countSort(int arr[], int n)
{
    // Finding maximum element to determine how many elements are there in the array

    int k = arr[0];
    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);
    }
    
    // Making count array to store the count of every element in the array

    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    
    //Traversing count array and adding count of i-1 to count of i

    for (int i = 1; i <= k; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    // Making output array to store the sorted elements in the array 
    // So traversing the original array from the last

    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }

    // Putting output array in the original array

    for (int i = 0; i < n; i++)
    {
        arr[i]=output[i];
    }

}
int main()
{
    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};

    countSort(arr,9);

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
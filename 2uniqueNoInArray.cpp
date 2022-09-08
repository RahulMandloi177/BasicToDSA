#include <iostream>
using namespace std;

int setBit(int size, int pos)
{
    return ((size & (1 << pos)) != 0);
}

int unique(int arr[], int size)
{
    int xorSum = 0;
    for (int i = 0; i < size; i++)
    {
        xorSum = xorSum ^ arr[i];
    }

int tempxor = xorSum;
int setbit = 0;
int pos = 0;

while (setbit != 1)
{
    setbit = xorSum & 1;
    pos++;
    xorSum = xorSum >> 1;
}
int newxor = 0;

for (int i = 0; i < size; i++)
{
    if (setBit(arr[i], pos - 1))
    {
        newxor = newxor ^ arr[i];
    }
}
cout << newxor << endl;
cout << (tempxor ^ newxor) << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3,5,7};
    cout << unique(arr, 8) << endl;
}
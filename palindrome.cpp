#include <iostream>
using namespace std;

int main()
{
    int i,j,row;
    cout << "Enter the number of rows ";
    cin >> row;

    for (i = 1; i <= row; i++)
    {   
        for (j = 1; j <= row - i; j++)
        {
            cout << "  ";
        }
        int k = i;
        for (; j <= row; j++)
        {
            cout << k-- << " ";
        }
        k = 2;
        for (; j <= row + i - 1; j++)
        {
            cout << k++ << " ";
        }
        cout << endl;
    }
}
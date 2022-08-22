#include <iostream>
using namespace std;

int main()
{
    int i, j, row;
    cout << "Enter the number of rows ";
    cin >> row;
    int count=1;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout <<count << " ";
            count++;
        }
        cout<< endl;
    }
}
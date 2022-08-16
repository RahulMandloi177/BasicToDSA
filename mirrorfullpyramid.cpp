#include <iostream>
using namespace std;

int main()
{
    int i, j, row;
    cout << "Enter the number of rows ";
    cin >> row;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <=2*i-1; j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }

    for (i = row; i >=1; i--)
    {
        for (j = 1; j <= row - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <=2*i-1; j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
}
#include <iostream>

using namespace std;

int main()
{
    int i, j, rows, column;
    cout << "Enter the number of rows";
    cin >> rows >> column;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <=column; j++)
        {
            if (i == 1 || i == rows)
            {
                cout << "*";
            }
            else if (j == 1 || j == column)
            {

                cout << "*";
            }
            else
                cout << " ";
        }

        cout << endl;
    }
}

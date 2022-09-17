#include <iostream>
using namespace std;

void primeSieve(int num)
{
    int i;
    int prime[100] = {0};

    for (i = 2; i <= num; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= num; j = j + i)
            {
                prime[j] = 1;
            }
        }
    }
    for (i = 2; i <= num; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int num;
    cout<<"Enter a number";
    cin >> num;

    primeSieve(num);
}
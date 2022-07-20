#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, rem, sum = 0;
    cout << "Enter a number";
    cin >> num;

    int originalnum = num;
    while (num > 0)
    {
        rem = num % 10;
        sum=sum+pow(rem, 3);
        num = num / 10;
    }
     
     
    if (sum == originalnum)
    {
        cout << "Number is armstrong number ";
    }
    else
    {
        cout << "Number is not armstrong";
    }
}
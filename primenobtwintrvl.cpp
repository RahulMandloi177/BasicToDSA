#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num)
{
    if(num==0 || num==1)
    {
        return false;
    }
    
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int i,a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;

    for(i=a;i<=b;i++)
    {
     if(isPrime(i))
     {
         cout<<i<<endl;
     }
    }
}
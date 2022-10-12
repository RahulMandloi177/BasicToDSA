#include<iostream>
using namespace std;

int sum(int num)
{   
    int ans=0;
    for(int i=1;i<=num;i++)
    {
        ans=ans+i;
    }
    return ans;
}

int main()
{
    int num;
    cout<<"Enter a number ";
    cin>>num;

   cout<<sum(num)<<endl;
}
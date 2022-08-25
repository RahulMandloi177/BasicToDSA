#include<iostream>
using namespace std;

int main()
{
    int i,j,row;
    cout<<"Enter the number the rows ";
    cin>>row;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row+1-i;j++)
        {
            cout<<j <<" ";
        }
        cout<<endl;
    }
}
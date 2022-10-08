#include<iostream>
using namespace std;

int main()
{   
    int mx=-19999999;
    int i,size;
    cout<<"Enter the size of array";
    cin>>size;

    int arr[size];
    
    cout<<"Enter the elemets of array";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<size;i++)
    {   
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    
        // if(arr[i]>mx)
        // {
        //     mx=arr[i];
        //     cout<<mx;
        // }
   }

}   
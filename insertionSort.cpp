#include<iostream>
using namespace std;

int main()
{   
    int i,size;
    cout<<"Enter the size of array";
    cin>>size;

    int arr[size];
    
    cout<<"Enter the elemets of array";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    for(i=1;i<size;i++)
    {
        int current =arr[i];
        int j=i-1;

        while(arr[j]>current&& j>=0)
        {     
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
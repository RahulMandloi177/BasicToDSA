#include<iostream>
using namespace std;


int linearSearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
           return i;
        }
     
    }
    return -1;
}

int main()
{   int size;
    cout<<"Enter the size of array";
    cin>>size;
    int arr[size];

    cout<<"Enter the elements of array";
      
      for(int i=0;i<size;i++)
      {
          cin>>arr[i];
      }

      int key;
      cout<<"Enter the element you want to search";
      cin>>key;

     cout<<linearSearch(arr,size,key);
}
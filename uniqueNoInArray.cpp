#include<iostream>
 using namespace std;

int unique(int arr[], int size)
{
    int xorSum=0;
    for(int i=0;i<size;i++)
    {
        xorSum=xorSum^arr[i];
    }
    return xorSum;
}

 int main()
 {
   int arr[]={1,2,3,4,1,2,3};
   cout<<unique(arr,7)<<endl;
 }
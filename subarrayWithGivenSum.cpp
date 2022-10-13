#include<iostream>
using namespace std;

int main()
{   
    int size,s;
    cout<<"Enter the size of array";
    cin>>size>>s;

    int arr[size];
    
    cout<<"Enter the elemets of array";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int i=0,j=0,start=-1,end=-1,sum=0;

    while(j<size&& sum+arr[j] <=s)
    {
      sum=sum+arr[j];
      j++;
    }

    if(sum==s)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<size)
    {
        sum=sum+arr[j];
        while(sum>s)
        {
            sum=sum-arr[i];
            i++;
        }
        if(sum==s)
        {
            start=i+1;
            end=j+1;
            break;
        }
        j++;
    }
    cout<<start<<" "<<end<<endl;

}
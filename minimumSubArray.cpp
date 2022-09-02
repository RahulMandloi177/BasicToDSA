#include<iostream>
using namespace std;

int smallestSubarryWithSum(int arr[],int n,int x)
{
    int sum=0,minLength=n+1,start=0,end=0;

    while(end<n)
    {
        while(sum<=x && end<n)
        {
            sum+=arr[end++];
        }

        while(sum>x&&start<n)
        {
            if(end-start<minLength)
            {
               minLength=end-start; 
            }
            sum =sum-arr[start++];
        }
    }

    return minLength;
}
int main()
{
    int arr[]={1,4,45,6,10,19};
    int n=6;
    int x=51;

    int minLength=smallestSubarryWithSum(arr,n,x);

    if(minLength==n+1)
    {
        cout<<"No such subarray exists"<<endl;
    }
    else
    {
        cout<<"Smallest lenght subarray : "<<minLength<<endl;
    }

    return 0;

}
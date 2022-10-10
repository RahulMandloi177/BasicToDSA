#include <iostream>
using namespace std;

// Peak element here is element which is greater than is previous and next element

int findPeakElement(int arr[], int start, int end, int n)
{
    int mid = (start + end) / 2;

    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid==n-1||arr[mid+1]<=arr[mid]))
        {
            return mid;
        }

    else if (mid > 0 || arr[mid - 1] > arr[mid])
    {
        return findPeakElement(arr, start, mid - 1, n);
    }
    else
    {
        return findPeakElement(arr, mid + 1, end, n);
    }
}
int main()
{
    int arr[]={0,6,8,5,7,9};
    int n=6;

    cout<<"Peak element index : "<<findPeakElement(arr,0,n-1,n)<<endl;

    return 0;
}
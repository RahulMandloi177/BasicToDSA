#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int k = start;
    int b[9];

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++, k++;
        }
        else
        {
            b[k] = arr[j];
            j++, k++;
        }
    }
    while (i <= mid)
    {
        b[k] = arr[i];
        i++, k++;
    }
    while (j <= end)
    {
        b[k] = arr[j];
        j++, k++;
    }

    for (k = start; k <=end; k++)
    {
        arr[k] = b[k];
    }
}
void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}
int main()
{
    int arr[] = {5,2,3,9,7,6,8,4,1};
    mergeSort(arr,0,8);
    
    
    printf("Sorted array: \n");
      
      for (int i=0; i < 9; i++)
      {
          cout<<arr[i]<<"";
      }
      cout<<endl;
    
    return 0;
}
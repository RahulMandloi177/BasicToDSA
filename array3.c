#include<stdio.h>

void reverseArr(int arr[],int start,int end)
 {
     while(start<end)
     {
         arr[end]=arr[start]+arr[end]-(arr[start]=arr[end]);       // Swapping in one line
         start++;
         end--;
     }
 }
void displayArr(int arr[],int size)
{   
    int i;

    for(i=0;i<size;i++)
    {
       printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[50]={1,2,3,4,5};
    int size=5;
    displayArr(arr,size);
    reverseArr(arr,0,size-1);
    printf("Reversed array is : ");
    displayArr(arr,size);
}
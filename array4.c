#include<stdio.h>


void findMinMax(int arr[],int size)
{
    int i,min=arr[0],max=arr[0];
    for(i=0;i<size;i++)
    {
        if (arr[i]<min)
        {    
            min=arr[i];
        }
        if (arr[i]>max)
        {    
            max=arr[i];
        }
    }
    printf("The minimum element is %d",min);
    printf("\n");
    printf("The maximum element is %d",max);

}
int main ()
{
int arr[]={1,2,3,4,5};
int size=5;
findMinMax(arr,size);
}

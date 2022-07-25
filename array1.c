#include<stdio.h>
#include<stdlib.h>

int main()

{
int arr[50],size,i;

printf("Enter the size of array");
scanf("%d",&size);

printf("Enter the elements of array");

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
printf("Elements in array are:");

    
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }

}
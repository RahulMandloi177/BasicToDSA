#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int size)
{  int i;
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[],int size,int element,int index,int capacity)
{ 
    int i;

     if(size>=capacity)
     {
         printf("invalid position :");
     }
     for(i=size-1;i>=index;i--)
     {
        arr[i+1]=arr[i];
     }
      arr[index]=element;
      
    printf("Element inserted successfully\n");
}
int main()
{
int arr[100]= {1,2,4,5,6};
int size=5,element=3;
int index=2;
display(arr,size);
indInsertion(arr,size,element,index,100);
size=size+1;
display(arr,size);
}

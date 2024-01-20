#include<stdio.h>

void display( int arr[], int size);
void deleteOperation( int arr[], int size, int index);

void main()
{
    int arr[100]={1,2,3,4,5,6};
    int size =6,index=1;
    display(arr,size);
    deleteOperation(arr, size, index);

}

void display( int arr[], int size)
{
    for( int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    
    }
    printf("\n");
}

void deleteOperation( int arr[], int size, int index)
{
       for (int  i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }

    size -= 1;

    display(arr, size);
}
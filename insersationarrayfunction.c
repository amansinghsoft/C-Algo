#include<stdio.h>

int main()
{
    void arrayElementInsert( int arr[], int size, int element, int element2 , int index);
    void display(int arr[], int size);
    int arr[100] ={1,2,3,4,5};
    int size=5,element=45,index=2,element2=67;

    display(arr,size);
    arrayElementInsert(arr,size,element , element2 , index);
    
    
    return 0;
}

void display (int arr[], int size )
{
    for( int i=0;i<size;i++)
    {
        printf(" %d\t",arr[i]);
    }
    printf("\n");
}

void arrayElementInsert( int arr[], int size, int element, int element2, int index)
{
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    size +=1;

    for (int i = size-1; i >=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element2;
    size +=1;
    
    display(arr,size);
}
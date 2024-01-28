#include<stdio.h>

void display (int arr[], int size)
{
    for (int  i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int array(int arr[], int size)
{
    arr[size-1]=arr[size-3];
    arr[size-2]=arr[size-2];
    arr[size-3]=arr[size-1];
    //arr[size-1]=arr[size-4];
    //arr[size-3]=arr[size-2];
    //arr[size-7]=arr[size-3];
    //arr[size-7]=arr[size-3];
    return 1;
    
}

int array2(int arr[], int size){

}

int main()
{
    int arr[100]={1,2,3,4,5,6,7};
    int size =7;
    display(arr,size);
    array(arr,size);
    display(arr,size);
    return 0;
}
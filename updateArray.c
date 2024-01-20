#include<stdio.h>

    void display(int arr[], int size);
    int updateOperation(int arr[],int index, int size, int value);
int main()
{   

    int arr[10]={1,2,3,4,5};
    int size=5, value, index;
    printf("Enter index and valus respectively :");
    scanf(" %d%d",&index,&value);
    display(arr,size);
    updateOperation(arr,index,size,value);
    

    
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);

    }
    printf("\n");
}

int updateOperation(int arr[],int index, int size, int value){

    if(size<=index){

        printf("Index not avalible for update.");
    }
    else{
        arr[index] = value;
        display(arr, size);
    }
    
    return 0;
}

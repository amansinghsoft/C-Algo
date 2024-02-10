#include<stdio.h>

//int main()
//{
    /*
    int arr[100] ={1,2,3,4,5};
    int size=5,element=45,index=2,element2=67;

    
    for( int i=0;i<size;i++)
    {
        printf(" %d\t",arr[i]);
    }
    printf("\n");
    
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

    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }  
    
    return 0;
}*/
    
    void display(int arr[],int size)
    {
        for(int i; i<size; i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\n");
    }

    int ara(int arr[],int size,int index,int element,int component)
    {
        if(size >= component)
        {
            return -1;
        }
    
        for(int i=size-1; i>=index; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        for (int i = 0; i < size; i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\n");
        
        return 1;
    }
int main()
{
    int arr[100]={2,3,4,5,6};
    int size = (sizeof(arr))/(sizeof(int)),index= 3, element=10 ;
    display(arr,size);
    ara( arr , size , index , element , 100);
    size += 1;
    display(arr,size);

    return 0;
}
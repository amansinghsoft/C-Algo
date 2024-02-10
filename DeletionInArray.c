#include<stdio.h>

/*  void display(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\n");
    }

    int hii( int arr[],int size,int index)
    {
        for( int i=index; i<size-1 ;i++)
        {
            arr[i]=arr[i+1];
            return 1;
        }
    }

int main()
{
    int arr[100]={2,3,4,5,45,43,12};
    int size =7,index =0;
    display( arr,size);
    hii( arr,size,index);
    size -=1;
    display(arr,size);
    return 0;
}
*/
int main()
{
    int arr[100]={1,2,3,4,5,6};
    int size =6,index=1;

    for( int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    
    }
    printf("\n");

    for (int  i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }

    size -=1;
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
    
}
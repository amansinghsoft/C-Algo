#include<stdio.h>

/*int linear(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
        
    }
    return -1;
    
}*/

int binary(int arr[],int size, int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (arr[mid]==element)
        {
            return mid;
        }
        if (arr[mid]<element)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }
    return -1;
    
}

int main()
{   
    int arr[100]={1,2,34,35,46,78,79,81,85,90};
    
    //int arr[100]={1,2,3,4,5,6,7,8,9,34,24,21,34};
    int size = (sizeof(arr))/sizeof(int);
    
    int element=81;
    //int search=linear(arr,size,element);
    int search=binary(arr,size,element);

    printf("the output is %d at %d",element,search);

    return 0;
}


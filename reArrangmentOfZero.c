#include <stdio.h>

void sortArray(int digit[] ,int size);
void mapZeroLast(int digit[], int size);
void display(int digit[], int size);
int mapArrayToDigit(int digit[] ,int size);

void main() {
    int num, size;
    printf("Enter the number of digit size : ");
    scanf("%d",&size);
    printf("Enter the number respective to above size : ");
    scanf("%d",&num);
    int digit[size];  

    printf("Before shorting : %d\n",num);
    for (int i = 0; i < size; i++) {
        digit[i] = num % 10;
        num /= 10;
    }
    sortArray(digit, size);
    int result = mapArrayToDigit( digit, size);
    printf("After sorting : %d",result);
    //display(digit,size);
}

void sortArray(int digit[] , int size ){
    for (int  i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++) {
         if (digit[i] > digit[j] ) {
                
                int temp = digit[i];
                digit[i] = digit[j];
                digit[j] = temp;
            }
        }
        
    }
    mapZeroLast(digit, size);
    
}
void mapZeroLast(int digit[], int size){
    
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (digit[i] != 0)
        {
            digit[count]=digit[i];
            count++;
        }
        
    }
    for (int i = count; i < size; i++)
    {
        digit[i]=0;
    }
    

}
void display(int digit[], int size){
    printf("The output is : \n");
    for (int i = 0; i < size; i++)
    {
        printf(" %d",digit[i]);
    }
    
}
int mapArrayToDigit(int digit[] ,int size){
    int k=0;
    for (int i = 0; i < size; i++)
    {
        k= k*10 + digit[i];
    }
    return k;
}

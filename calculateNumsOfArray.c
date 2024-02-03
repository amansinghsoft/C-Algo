#include<stdio.h>
void calculate(char operation, int size, int nums[]);
int addition(int size ,int nums[]);
int subtraction(int size ,int nums[]);
int multiplication(int size ,int nums[]);
float division(int size ,int nums[]);

void main(){
char operation;
int size ;

printf("Please provide mathematical operation :");
scanf("%c",&operation);

printf("Please provide size :");
scanf("%d",&size);

int nums[size];
printf("Please provide numbers :");
for (int i = 0; i < size; i++)
{
    scanf("%d",&nums[i]);
}
calculate(operation, size, nums);

}

void calculate(char operation, int size, int nums[]){
    float result =0.0;
    
    switch (operation)
    {
    case '+':
        result=addition(size,nums);
        break;
    case '-':
        result=subtraction(size,nums);
        break;
    case '*':
        result=multiplication(size,nums);
        break;
    case '/':
        result=division(size,nums);
        break;
    
    default:
        printf("Operatio symble undefined.");
    }
    printf("Operation result is %f .",result);
}
int addition(int size, int nums[]){
    int result=0;
    for (int i = 0; i < size; i++)
    {
        result=result+ nums[i];
    }
    return result;
}

int subtraction(int size, int nums[]){
    int result=0;
    for (int i = 0; i < size; i++)
    {
        result=result - nums[i];
    }
    return result;
}

int multiplication(int size, int nums[]){
    int result=0;
    for (int i = 0; i < size; i++)
    {
    if (i==0)
    {
        result=nums[i];
    }else{
    
        result=result * nums[i];
    }
    }
    return result;
}

float division(int size, int nums[]){
    float result=0.0;
    for (int i = 0; i < size; i++)
    {
    if (i==0)
    {
        result=nums[i];
    }else{
    
        result=result / nums[i];
    }
    }
    return result;
}
#include<stdio.h>
#include<stdbool.h>
 bool armstrong( int number);
void main(){
    int num;
    printf("Enter the number you want to check :");
    scanf("%d",&num);
if (armstrong(num))
{
    printf("The number is arestrong.");
}else{
    printf("the number is not armstrong.");
}
}

bool armstrong (int number){
    int original = number;
    int temp=0,remeinder=0;
    while (number!=0)
    {
        remeinder = number %10;
        temp = temp+(remeinder*remeinder*remeinder);
        number/= 10;
    }
    return temp==original?true:false;
}
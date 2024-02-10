#include<stdio.h>
#include<stdbool.h>
bool isPelendrom(int number);
int main(){
    int num;
    printf("Enter the number Which you want to check :");
    scanf("%d",&num);
    
if (isPelendrom(num))
{
    printf("Give number is Pelendrom .");
}else{
    printf("The number is not a pelendrom number.");
}

    return 0;
}
bool isPelendrom(int number){
    int temp=0, reminder=0;
    int original=number;

    while (number!= 0)
    {
        reminder=number%10;
        temp=temp*10+reminder;
        number=number/10;
    }
   
    return  temp == original ? true : false;

}
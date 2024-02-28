#include<stdio.h>

long decimalToBinary(long num); 

int main()
{
    long num1;
    long binary;
    printf("Enter 1st number in Decimal : ");
    scanf("%ld",&num1);
   
      decimalToBinary(num1);
   
    return 0;
}
long decimalToBinary(long num)
{
    long a[32];
    long i=0;
    
     while(num>0){
        a[i]=num%2;
        num=num/2;
        
        i++;
     }
      printf("The number in binary is : ");  
     for (long j = i-1; j >=0; j--)
     {
        printf("%ld",a[j]);       
     }
printf("\n");
}

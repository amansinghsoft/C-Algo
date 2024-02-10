//FibnacciSerise : 0,1,1,2,3,5,8,13,21........ 
#include<stdio.h>
#include<stdbool.h>

void main(){
int number=0;
int n0=0,n1=1,n3=0;
printf("Enter maximum number it reach : ");
scanf("%d",&number);
printf(" %d %d ",n0,n1);
for (int i = 0; i < number; i++)
{
    n3=n1+n0;
    printf(" %d ",n3);
    n0=n1;
    n1=n3;
if (number==n3) break;
    
}

}
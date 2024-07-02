#include<stdio.h>
 
int main()
{
    int a,b;
   printf("Enter the number of rows and columns: ");
    scanf("%d %d",&a,&b);
    for (int i = 0; i < a; i++)
    {
        for (int j = i; j < b; j++)
    {
        printf("*");
    } 
    printf("\n"); 
    }
    
    return 0;
}

#include<stdio.h>
 
int main()
{
    int mat1[10][10],res[10][10],mat2[10][10];
    int i,j,rows,columns;
    
    printf("Enter the value of  Rowes and Column :");
    scanf("%d%d",&rows,&columns);
   
    printf("Enter the value of 1st array :\n");
    for ( i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
    {
        scanf("%d",&mat1[i][j]);
    }
        printf("\n");
    }
    printf("Enter the value of 2nd array :\n");
    for ( i = 0; i < rows; i++)
    { 
        for ( j = 0; j < columns; j++)
    {
        scanf("%d",&mat2[i][j]);
    }
        printf("\n");
    }
   // the sum
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < columns; j++)
    {
        res[i][j]= mat1[i] [j] + mat2[i] [j];
    }
    }
    //print the sum
    printf("The sum is :\n");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < columns; j++)
    {
        printf("%d\t",res[i] [j]);
    }
        printf("\n");
    }
    return 0;
}

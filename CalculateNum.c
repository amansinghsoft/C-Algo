#include<stdio.h>
void calculate(int a, int b, char d);
int main(){
int a,b;
char d;
printf("Enter character: ");
scanf("%c",&d);
printf("Enter the value of a and b :");
scanf("%d%d",&a,&b);
calculate(a,b,d);

}
void calculate(int a, int b, char d){
    switch (d)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '/':
        printf("%d",a/b);
        break;
    case '%':
        printf("%d",a%b);
        break;
    
    default:
        printf("Invalid input");
    }
}
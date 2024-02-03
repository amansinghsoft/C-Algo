#include<stdio.h>
void number(int num);
int main(){
    int day;
    printf("Enter the number :");
    scanf("%d",&day);
    number(day);

return 0;
}
void number(int num){
    switch (num)
    {
    
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("%dth day in a week is not avalible. ",num);
        
    }
}
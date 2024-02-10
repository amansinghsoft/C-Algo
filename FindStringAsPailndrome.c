#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool checkstring(char arr[], int length);

void main(){
char input[100];
int len;
printf("Enter the string to find out palindrome : ");
gets(input);
len =strlen(input)-1;
if(checkstring(input,len)){
    printf("Given stingh is palindrome");
}else{
    printf("Given string is not palindrome");
}
    
}

bool checkstring(char arr[], int length){
    for (int i = 0; i <length ;)
    {
        if (arr[i++]!=arr[length--])
        {
            return false;
        }
        
    }
    return true;
    
}
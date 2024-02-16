#include<stdio.h>
#include<string.h>

void convertedString(char arr[]);
void main(){
    char str[100];
    printf("Enter the string you want to convert :");
    gets(str);

    convertedString(str);
    
}
void convertedString(char arr[]){
    for (int i = 0; i < strlen(arr); i++)
    {
        if (i==0)
        {
            if (arr[i]>='a' && arr[i]<='z')
            {
                arr[i]=arr[i]-32;
                printf("%c",arr[i]);
            }
            
        }else if (arr[i-1]==' ')
        { 
            if (arr[i]>='a' && arr[i]<='z')
            
            {
                arr[i]=arr[i]-32;
                printf("%c",arr[i]);
            }      
        }else{
            printf("%c",arr[i]);
        }

    }
}
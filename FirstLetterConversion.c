#include<stdio.h>
#include<string.h>

void main(){
    char str[100];
    printf("Enter the stringyou want to convert :");
    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (i==0)
        {
            if (str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
                printf("%c",str[i]);
            }
            
        }else if (str[i-1]==' ')
        { 
            if (str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
                printf("%c",str[i]);
            }
            
            
        }else{
            printf("%c",str[i]);
        }

    }
    
}
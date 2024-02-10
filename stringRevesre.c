#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char length( char arr[]){
    int len=0;
    char temp;
 while (arr[len]!= '\0')
   {
    len++;
   }
   for (int i = 0; i < (len-1)/2; i++)
    {
    
        temp = arr[i];
        arr[i]= arr[len-1-i];
        arr[len-1-i]=temp;
    }
   printf("%s",arr);
}
int main(){
   char str[100];

   printf("Enter a sentence : ");
   gets(str);
    length(str);
   //printf("%s",strrev(str));
   return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
   int i,count=0;
   char c,str[100];
   
   printf("Enter a sentence : ");
   
   gets(str);
   
   printf("Enter a character to check how many times it is repeating :");
   scanf("%c",&c);
   for(i=0;i<strlen(str);i++){
      if(str[i]==c){
         count++;
      }
   }
   printf("Letter %c repeated %d times  ",c,count);
   
   return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isAvalible(char c, char store[]);

int main(){
   char c,str[100];
   char store[100] = {' '};
   int storeCount=0;
   
   printf("Enter a sentence : ");
   
   gets(str);
   
   
   for(int i=0;i<strlen(str);i++){
      int count=0;

    if (isAvalible (str[i] , store))
    {
        store[storeCount]=str[i];
        storeCount++;
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[i]==str[j])
            {
                count++;
            }
            
        }
        
    }
    if (count!=0)
    {
    
    printf("the output is : %c =%d\n",str[i],count);
    }
   }
   return 0;
}
bool isAvalible(char c, char store[]){
    
    bool flag=false;
    for (int i = 0; i < 26; i++)
    {
        if (store[i]!=c)
        {
            flag=true;

        }else{
            flag=false;
            break;
        }
    }
    return flag;
    
}

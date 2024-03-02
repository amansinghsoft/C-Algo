#include<stdio.h>
#include<string.h>
 
 void removeDuplicate(int str[], int n);
int main()
{
    int str[100];
    int n ;
    printf("Enter the size of Array & Array :");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&str[i]);
    }
    removeDuplicate( str, n);

    
    return 0;
}
void removeDuplicate(int str[], int n){
    int index = 0;
    
    for (int i = 0; i < n; i++) {
        
        int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j])
                break;
        }
       
        if (j == i)
            str[index++] = str[i];
    }
    str[index] = '\0';
    
    printf("\nArray after removing duplicates: ");
    
    for (int i = 0; i < index; ++i) {
        printf("%d ", str[i]);
    }
}
#include<stdio.h>
#include<string.h>

void removeDuplicate(char str[] ,int n);
int main()
{
    char str[100];
    printf("Enter the string you want to check :");
    gets(str);
    int n = sizeof(str) / sizeof(str[0]);
    removeDuplicate(str ,n);
    return 0;
}
void removeDuplicate(char str[], int n){
    int index = 0;
    
    // Traverse through all characters
    for (int i = 0; i < n; i++) {
        // Check if str[i] is present before it
        int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j])
                break;
        }
        // If not present, then add it to the result.
        if (j == i || str[j]==' ')
            str[index++] = str[i];
    }
    // Add null character at the end to terminate the string
    str[index] = '\0';
    printf("%s",str);
}

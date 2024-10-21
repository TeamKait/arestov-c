#include <stdio.h>
#include <string.h>

void reverseString(char* str){
    int n = strlen(str);
    for(int i = 0; i < n / 2; i++){
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main(){
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;

    reverseString(str);
    printf("Reversed string: %s", str);
    
}

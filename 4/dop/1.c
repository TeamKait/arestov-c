#include <stdio.h>
#include <string.h>

void QuickStringInput(char string[], int size, char text[])
{
    printf("%s\n", text);
    fgets(string, size, stdin);
    string[strcspn(string, "\n")] = 0;
}
void StringOperations(char x[], char y[]){
    //compare
    if(strcmp(x, y) == 0){
        printf("\nStrings are equal");
    }
    else{
        printf("\nStrings are NOT equal");
    }
    //substring search
    if(strstr(x, y) == NULL){
        printf("\nMain string does NOT contain substring");
    }
    else{
        printf("\nMain string does contain substring");
    }
    //concat
    printf("\nConcat: %s", strcat(x, y));

}
int main()
{
    int size = 100;
    char str[size];
    char auxStr[size];

    QuickStringInput(str, size, "Enter main string:");
    QuickStringInput(auxStr, size, "Enter auxilary string:");

    StringOperations(str, auxStr);

    return 0;
}
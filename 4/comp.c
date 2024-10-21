#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = 0;

    if(strcmp(str1, str2) == 0){
        printf("The strings are identical.\n");
    }
    else{
        printf("The strings are not identical.\n");
    }

    return 0;
}
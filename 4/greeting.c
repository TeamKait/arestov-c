#include <stdio.h>
#include <string.h>

int main(){
    char greeting[50] = "Hello, ";
    char name[20];

    printf("Enter your name:");
    fgets(name, 20, stdin);
    name[strcspn(name, "\n")] =  0;

    strcat(greeting, name);
    strcat(greeting, "!");

    printf("%s\n", greeting);
}
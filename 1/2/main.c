#include <stdio.h>
#include <stdlib.h>

void floatToInt(){
    float f;
    printf("Enter a float value: ");
    scanf("%f", &f);
    int i = (int) f;
    printf("Float to int: %d\n", i);
}

void doubleToInt(){
    double f;
    printf("Enter a double value: ");
    scanf("%lf", &f);
    int i = (int) f;
    printf("Double to int: %d\n", i);
}

void intToDouble(){
    int i;
    printf("Enter an int value: ");
    scanf("%d", &i);
    double f = (double) i;
    printf("Int to double: %lf\n", f);
}

void intToFloat(){
    int i;
    printf("Enter an int value: ");
    scanf("%d", &i);
    float f = (float) i;
    printf("Int to float: %f\n", f);
}


void floatToDouble(){
    float f;
    printf("Enter a float value: ");
    scanf("%f", &f);
    double d = (double) f;
    printf("Float to double: %lf\n", d);
}

void doubleToFloat(){
    double d;
    printf("Enter a double value: ");
    scanf("%lf", &d);
    float f = (float) d;
    printf("Double to float: %f\n", f);
}
void charToInt(){
    char c;
    printf("Enter a character: ");
    scanf("%c", c);
    int i = (int) c;
    printf("Char to Int: %d\n", i);
}
void charToFloat(){
    char c;
    printf("Enter a character: ");
    scanf("%c", c);
    float f = (float) c;
    printf("Char to Float: %f\n", f);
}

int main(){
    int choice;
    while (1)
    {
        printf("1. Float to Int\n");
        printf("2. Double to Int\n");
        printf("3. Int to Float\n");
        printf("4. Int to Double\n");
        printf("5. Float to Double\n");
        printf("6. Double to Float\n");
        printf("7. Char to Int\n");
        printf("8. Char to Float\n");
        printf("9. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            floatToInt();
            break;
        case 2:
            doubleToInt();
            break;
        case 3:
            intToFloat();
            break;
        case 4:
            intToDouble();
            break;
        case 5:
            floatToDouble();
            break;
        case 6:
            doubleToFloat();
            break;
        case 7:
            charToInt();
            break;
        case 8:
            charToFloat();
            break;
        case 9:
            printf("Exiting");
            exit(0);
        default:
            printf("Unexpected command");
            choice = 0;
            break;
        }
    }
    
}
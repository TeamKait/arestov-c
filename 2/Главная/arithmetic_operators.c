#include <stdio.h>

int main(){
    int a = 10;
    int b = 3;

    printf("a = %d, b = %d\n", a, b);

    // Сложение
    int sum = a + b;
    printf("a + b = %d\n", sum);

    // Вычитание
    int diff = a - b;
    printf("a - b = %d\n", diff);

    // Умножение
    int prod = a * b;
    printf("a * b = %d\n", prod);

    // Деление
    int quot = a / b;
    printf("a / b = %d\n", quot);

    // Остаток от деления
    int rem = a % b;
    printf("a %% b = %d\n", rem);
    return 0;
}
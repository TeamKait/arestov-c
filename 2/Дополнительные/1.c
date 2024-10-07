#include <stdio.h>

int main()
{
    // Напишите программу, которая принимает два числа от пользователя
    // и выполняет все основные арифметические операции над ними, выводя результаты

    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    if (b != 0)
    {
        printf("a / b = %d\n", a / b);
    }
    printf("a * b = %d\n", a * b);
    if (b != 0)
    {
        printf("a %% b = %d\n", a % b);
    }
    return 0;
}
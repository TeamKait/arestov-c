#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 10, b = 3;

    bool x = true, y = false;

    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    printf("x && y = %d\n", x && y);
    printf("x || y = %d\n", x || y);
    printf("!x = y = %d\n", !x);

    
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a < b: %d\n", a < b);
    printf("a > b: %d\n", a > b);
    printf("a <= b: %d\n", a <= b);
    printf("a >= b: %d\n", a >= b);

    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    a = 10;
    printf("a = %d\n", a);
    a += b;
    printf("a += %d\n", a);
    a -= b;
    printf("a -= %d\n", a);
    a *= b;
    printf("a *= %d\n", a);
    a /= b;
    printf("a /= %d\n", a);
    a %= b;
    printf("a %%= %d\n", a);
    a <<= 1;
    printf("a <<= %d\n", a);
    a >>= 1;
    printf("a >>= %d\n", a);

    return 0;
}
#include <stdio.h>

int main(){
    int a = 10, b = 5;

    a = b;
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
    
    a = 5;
    a <<= 1;
    printf("a <<= %d\n", a);
    
    a = 10;
    a >>= 1;
    printf("a >>= %d\n", a);

    return 0;
}
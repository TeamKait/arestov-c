#include <stdio.h>

int main(){
    int a = 5; //0101
    int b = 3; //0011

    // bit AND
    int and_result = a & b;
    printf("a & b = %d\n", and_result);

    // bit OR
    int or_result = a | b;
    printf("a | b = %d\n", or_result);

    // bit XOR
    int xor_result = a ^ b;
    printf("a ^ b = %d\n", xor_result);

    // bit NOT
    int not_result = ~a;
    printf("~a = %d\n", not_result);

    // bit LEFT SHIFT
    int left_shift = a << 1;
    printf("a << 1 = %d\n", left_shift);

    // bit RIGHT SHIFT
    int right_shift = a >> 1;
    printf("a >> 1 = %d\n", right_shift);


    return 0;
}
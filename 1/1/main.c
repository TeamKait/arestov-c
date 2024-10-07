#include <stdio.h>

int main(){
    int integer = 10;
    float floating_point = 3.14;
    double double_precision = 3.1415926535;
    char character = 'A';

    // Неявное преобразование
    double result = integer + double_precision;
    printf("Result of implicit conversion: %lf\n", result);

    // Явное преобразование
    
    int truncated_result = (int) double_precision; 
    printf("Result of explicit conversion: %d\n", truncated_result);

    int a = 5, b = 2;
    float division_result = (float) a / b;

    printf("Division result: %f\n",division_result);


    return 0;
}
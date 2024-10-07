#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool x = true, y = false;

    bool and_result = x && y;
    printf("x && y = %d\n", and_result);

    bool or_result = x || y;
    printf("x || y = %d\n", or_result);

    bool not_result = !x;
    printf("!x = y = %d\n", not_result);
    return 0;
}
#include <stdio.h>

int main(){
    int numbers[] = {1, 2, 3, 4, 5};

    printf("Элементы массива numbers:\n");
    for(int i = 0; i < 5; i++){
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    numbers[2] = 10;

    printf("\nОбновлённые элементы массивы numbers:\n");
    for(int i = 0; i < 5; i++){
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    
    return 0;
}
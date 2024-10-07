#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    printf("Enter array length: ");
    scanf("%d", &size);

    int *dynamic_array = (int *)malloc(size * sizeof(int));
    if(dynamic_array == NULL){
        printf("Memory allocation error\n");
        return 1;
    }

    for(int i = 0; i < size; i++){
        dynamic_array[i] = i + 1;
    }
    printf("Elements of dynamic array:\n");
    for(int i = 0; i < size; i++){
        printf("dynamic_array[%d] = %d\n", i, dynamic_array[i]);
    }

    free(dynamic_array);

    return 0;
}
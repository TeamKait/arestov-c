#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int size;
void displayArray(int *array)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void bubbleSort(int *array)
{
    bool sorted = false;
    while (!sorted)
    {
        sorted = true;
        for (int i = 0; i < size; i++)
        {
            if (i - 1 <= size)
            {
                if (array[i] > array[i + 1])
                {
                    sorted = false;
                    int buffer = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = buffer;
                }
            }
        }
    }
}

int main()
{
    printf("Enter array length: ");
    scanf("%d", &size);

    int *array = (int *)malloc(size * sizeof(int));
    if (array == NULL)
    {
        printf("Memory allocation error\n");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element\n", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Array : \n");
    displayArray(array);

    bubbleSort(array);

    displayArray(array);

    return 0;
}
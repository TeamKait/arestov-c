#include <stdio.h>

void QuickInput(int *var, char name[]){
    printf("Enter %s:\t", name);
    scanf("%d", var);
}
int main(){
    int sizeX;
    int sizeY;
    QuickInput(&sizeX, "sizeX");
    QuickInput(&sizeY, "sizeY");

    int matrix[sizeY][sizeX];

    printf("\n");
    int sum = 0;
    for(int y = 0; y < sizeY; y++){
        for(int x = 0; x < sizeX; x++){
            char name[15];
            int n = sprintf(name, "%d, %d", y + 1, x + 1);
            QuickInput(&matrix[y][x], name);
            sum += matrix[y][x];
        }
    }

    double avg = (double) sum / (sizeX * sizeY);

    printf("\nSum = %d \t|\t Avg = %lf", sum, avg);

    return 0;
}
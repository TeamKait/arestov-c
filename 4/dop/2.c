#include <stdio.h>
#include <string.h>

int main()
{
    char ch;
    int i = 0;
    int size = 0;

    printf("Enter characters");
    while(1){
        ch = getchar();
        if(ch == '\n'){
            break;
        }
        size += 1;
        i++;
    }
    printf("Size = %d", size);
    return 0;
}
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define BUFFER_SIZE 20

int line = 1;
;
;

void clearBuffer(char buffer[BUFFER_SIZE])
{
    for (int i = 0; i < BUFFER_SIZE; i++)
    {
        buffer[i] = 0;
    }
}
void handleWord(char buffer[BUFFER_SIZE], char previousBuffer[BUFFER_SIZE], char previousPreviousBuffer[BUFFER_SIZE])
{
    // printf("Checking word %s\n", buffer);
    int exists = 1;
    // printf("buffer: %s, prevBuffer: %s, prevPrevBuffer: %s ", buffer, previousBuffer, previousPreviousBuffer);
    if (strcmp(buffer, "print") == 0)
    {
        printf("Print command executed");
    }
    else if (strcmp(buffer, "hack") == 0)
    {
        printf("HACK");
    }

    else if (strcmp(previousBuffer, "==") == 0)
    {
        // int leftNumber = (int)previousPreviousBuffer;
        // int rightNumber = (int)previousPreviousBuffer;
        if(strcmp(previousPreviousBuffer, buffer) == 0){
            printf("TRUE: %s == %s", previousPreviousBuffer, buffer);
        }
        else{
            printf("FALSE");
        }
    }
    else if(strcmp(previousBuffer, "!=") == 0){
        if(strcmp(previousPreviousBuffer, buffer) != 0){
            printf("TRUE: %s != %s", previousPreviousBuffer, buffer);
        }
        else{
            printf("FALSE");
        }
    }
    else if(strcmp(previousBuffer, ">") == 0){
        if(strcmp(previousPreviousBuffer, buffer) > 0){
            printf("TRUE: %s > %s", previousPreviousBuffer, buffer);
        }
        else{
            printf("FALSE");
        }
    }
    else if(strcmp(previousBuffer, "<") == 0){
        if(strcmp(previousPreviousBuffer, buffer) < 0){
            printf("TRUE: %s < %s", previousPreviousBuffer, buffer);
        }
        else{
            printf("FALSE");
        }
    }
    else if(strcmp(previousBuffer, ">=") == 0){
        if(strcmp(previousPreviousBuffer, buffer) >= 0){
            printf("TRUE: %s >= %s", previousPreviousBuffer, buffer);
        }
        else{
            printf("FALSE");
        }
    }
    else if(strcmp(previousBuffer, "<=") == 0){
        if(strcmp(previousPreviousBuffer, buffer) <= 0){
            printf("TRUE: %s <= %s", previousPreviousBuffer, buffer);
        }
        else{
            printf("FALSE");
        }
    }
    else
    {
        exists = 0;
    }
    if (exists)
    {
        printf("\n");
    }
    strcpy(previousPreviousBuffer, previousBuffer);
    strcpy(previousBuffer, buffer);
}

int main()
{
    FILE *fp = fopen("input.yo", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    char buffer[BUFFER_SIZE] = "";
    int lastBuffer = 0;

    char previousBuffer[BUFFER_SIZE] = "";
    char previousPreviousBuffer[BUFFER_SIZE] = "";

    int ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (isdigit(ch))
        {

            printf("NUMBER('%c')", ch);
            buffer[lastBuffer] = ch;
            lastBuffer++;
        }
        else if (isspace(ch))
        {
            handleWord(buffer, previousBuffer, previousPreviousBuffer);
            lastBuffer = 0;
            clearBuffer(buffer);
            if (ch == 10)
            {
                printf("\nNew line\n");
                line++;
            }
            else
            {
                printf("SPACE('%c')", ch);
            }
        }
        else
        {
            buffer[lastBuffer] = ch;
        
            lastBuffer++;
            printf("OTHER('%c')", ch);
        }
        printf(" <-- On line %d\n", line);
    }
    handleWord(buffer, previousBuffer, previousPreviousBuffer);

    fclose(fp);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    void ** items;
    int top;
    int capacity;
} Stack;

Stack *initStack(int capacity)
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->items = (void *)malloc(sizeof(void) * capacity);
    stack->top = -1;
    stack->capacity = capacity;
    return stack;
}
int getLength(Stack *stack){
    return stack->capacity;
}
int isFull(Stack *stack)
{
    return stack->top == stack->capacity - 1;
}

int isEmpty(Stack *stack)
{
    return stack->top == -1;
}

void push(Stack *stack, void *item)
{
    if (isFull(stack))
    {
        printf("Stack overflow!");
        return;
    }
    stack->items[++stack->top] = item;
}

void *peek(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty!");
    }
    else
    {
        return stack->items[stack->top];
    }
}

void *pop(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty!");
    }
    else
    {
        return stack->items[stack->top--];
    }
}

typedef struct
{
    char name[100];
    char surname[100];
    int age;
} Person;

int main()
{
    Stack *stack = initStack(10);
    int age = 25;
    Person person = {"Vova", "Edikov", 48};
    char cha = 'a';
    push(stack, &age);
    push(stack, &person);
    push(stack, &cha);

    printf("Stack length: %d\n", getLength(stack));

    char ch = *(char *)pop(stack);
    printf("Pop %c\n", ch);


    Person peekPerson = *(Person*)peek(stack);
    printf("Peek \"%s %s\" Age: %d\n", person.name, person.surname, person.age);

    Person popPerson = *(Person*)pop(stack);
    printf("Pop \"%s %s\" Age: %d\n", person.name, person.surname, person.age);


    int a = *(int *)pop(stack);
    printf("Pop %d\n", a);
  
    free(stack->items);
    free(stack);

    return 0;
}
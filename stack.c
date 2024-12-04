#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Maximum size of the stack

int stack[MAX]; // Array to store the stack
int top = -1;   // Top is initialized to -1, indicating an empty stack

// Function to check if the stack is full
int isFull()
{
    return top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty()
{
    return top == -1;
}

// Function to push an element into the stack
void push(int value)
{
    if (isFull())
    {
        printf("Stack Overflow! Cannot push %d\n", value);
    }
    else
    {
        top++;
        stack[top] = value;
        printf("Pushed %d into the stack.\n", value);
    }
}

// Function to pop an element from the stack
int pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow! Cannot pop element.\n");
        return -1; // Return an error value
    }
    else
    {
        int poppedValue = stack[top];
        top--; // Move top down
        printf("Popped %d from the stack.\n", poppedValue);
        return poppedValue;
    }
}

// Function to display the stack
void display()
{
    if (isEmpty())
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    push(10);  // Pushes 10 into the stack
    push(20);  // Pushes 20 into the stack
    push(30);  // Pushes 30 into the stack
    display(); // Displays the current stack

    pop();     // Pops the top element (30)
    display(); // Displays the current stack

    push(40);  // Pushes 40 into the stack
    push(50);  // Pushes 50 into the stack
    push(60);  // Tries to push 60, but stack is full
    display(); // Displays the current stack

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX]; // Array to store queue elements
int front = -1; // Front points to the front of the queue
int rear = -1;  // Rear points to the rear of the queue

// Function to check if the queue is full
int isFull()
{
    return rear == MAX - 1;
}

// Function to check if the queue is empty
int isEmpty()
{
    return front == -1 || front > rear;
}

// Function to insert an element in the queue (enqueue)
void enqueue(int value)
{
    if (isFull())
    {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    }
    else
    {
        if (front == -1)
            front = 0; // Set front to 0 if first insertion
        rear++;
        queue[rear] = value;
        printf("Enqueued %d into the queue.\n", value);
    }
}

// Function to remove an element from the queue (dequeue)
int dequeue()
{
    if (isEmpty())
    {
        printf("Queue Underflow! Cannot dequeue element.\n");
        return -1; // Return an error value
    }
    else
    {
        int dequeuedValue = queue[front];
        front++;
        // Reset front and rear if the queue becomes empty
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
        printf("Dequeued %d from the queue.\n", dequeuedValue);
        return dequeuedValue;
    }
}

// Function to display the queue
void display()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements are:\n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    enqueue(40);
    enqueue(50);
    enqueue(60); // Queue is full now
    display();

    return 0;
}

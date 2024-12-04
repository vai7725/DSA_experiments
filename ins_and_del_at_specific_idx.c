#include <stdio.h>

#define MAX 100 // Maximum size of the array

// Function to display the array
void displayArray(int arr[], int size)
{
    printf("Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at a specific index in the array
void insertElement(int arr[], int *size, int element, int index)
{
    if (*size >= MAX)
    {
        printf("Array is full. Cannot insert element.\n");
        return;
    }
    if (index < 0 || index > *size)
    {
        printf("Invalid index.\n");
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = *size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the specified index
    arr[index] = element;

    // Increment the size of the array
    (*size)++;
}

// Function to delete an element at a specific index from the array
void deleteElement(int arr[], int *size, int index)
{
    if (index < 0 || index >= *size)
    {
        printf("Invalid index.\n");
        return;
    }

    // Shift elements to the left to fill the gap created by the deletion
    for (int i = index; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    (*size)--;
}

int main()
{
    int arr[MAX], size, element, index, choice;

    // Initialize the array with elements
    printf("Enter the number of elements in the array (max %d): ", MAX);
    scanf("%d", &size);

    // Take input for array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Display the original array
    displayArray(arr, size);

    // Menu for insertion and deletion
    do
    {
        printf("\nChoose an option:\n");
        printf("1. Insert element\n");
        printf("2. Delete element\n");
        printf("3. Display array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to insert: ");
            scanf("%d", &element);
            printf("Enter the index to insert the element at: ");
            scanf("%d", &index);
            insertElement(arr, &size, element, index);
            displayArray(arr, size);
            break;

        case 2:
            printf("Enter the index to delete the element from: ");
            scanf("%d", &index);
            deleteElement(arr, &size, index);
            displayArray(arr, size);
            break;

        case 3:
            displayArray(arr, size);
            break;

        case 4:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

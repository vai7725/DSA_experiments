#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function to rearrange elements around the pivot
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // Last element as pivot
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1; // Return the partition index
}

// Quick Sort function to recursively sort the array
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high); // Find the partition index

        // Recursively sort the two subarrays
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {12, 31, 35, 8, 3217, 40, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array:\n");
    display(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted Array using Quick Sort:\n");
    display(arr, n);

    return 0;
}

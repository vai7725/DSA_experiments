#include <stdio.h>

void insertionSort(int arr[], int length)
{
    int i, key, j;

    for (i = 1; i < length; i++)
    {
        key = arr[i];

        j = i - 1;
    }
}

int main()
{
    int arr[] = {4, 3, 5, 7, 6, 5, 7, 8};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    for (int i = 0; i < arrLength; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    insertionSort(arr, arrLength);

    printf("Sorted array: \n");
    for (int i = 0; i < arrLength; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

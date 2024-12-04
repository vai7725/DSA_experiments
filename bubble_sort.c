#include <stdio.h>

void bubbleSort(int arr[], int length)
{
    int i, j, temp;

    for (i = 0; i < length - 1; i++)
    {
        for (j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    bubbleSort(arr, arrLength);

    printf("Sorted array: \n");
    for (int i = 0; i < arrLength; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

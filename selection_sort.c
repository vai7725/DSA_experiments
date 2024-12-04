#include <stdio.h>

void selectionSort(int arr[], int length)
{
    int i, j, minIdx, temp;

    for (i = 0; i < length - 1; i++)
    {
        minIdx = i;
        for (j = i + 1; j < length; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }

        if (minIdx != i)
        {
            // temp = arr[i];
            // arr[i] = arr[minIdx];
            // arr[minIdx] = temp;

            temp = arr[minIdx];
            arr[minIdx] = arr[i];
            arr[i] = temp;
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

    selectionSort(arr, arrLength);

    printf("Sorted array: \n");
    for (int i = 0; i < arrLength; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

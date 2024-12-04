#include <stdio.h>

int binarySearch(int arr[], int length, int target)
{
    int low = 0, high = length - 1;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {

            return mid;
        }
        else if (target < mid)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 55, 60};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the value you wanna find in the array: ");
    scanf("%d", &target);

    int resultIndex = binarySearch(arr, arrLength, target);

    if (resultIndex != -1)
    {
        printf("Target found at the index: %d", resultIndex);
    }
    else
    {
        printf("Target not found");
    }

    return 0;
}
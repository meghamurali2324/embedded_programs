#include <stdio.h>

int secLar(int arr[], int size)
{
    int first, second;

    if (arr[0] > arr[1]) // Initialize the first and second largest

    {
        first = arr[0];
        second = arr[1];
    }
    else
    {
        first = arr[1];
        second = arr[0];
    }

    for (int i = 2; i < size; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    return second;
}

int main()
{
    int arr[] = {101, 200, 46, 455, 998, 69};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = secLar(arr, size);
    printf("The second largest element is %d\n", result);

    return 0;
}
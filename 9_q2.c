// WAP to read an array and search for an element using Binary Search.
#include <stdio.h>
#include <stdlib.h>

void sort_a9_2(int *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 2; i++)
    {
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
}

int bin_sear_a9_2(int *arr, int n, int key)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
            return mid + 1;

        // Agar Key chhota ho to left me jana hai
        if (key < arr[mid])
            e = mid - 1;

        // Agar key bada ho to right me jana hai
        if (key > arr[mid])
            s = mid + 1;
    }
    return 0;
}

int main_9_2()
{
    printf("Enter size of array: ");
    int n;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Error. Memory Not Allocated.");
        return 1;
    }

    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", (arr + i));

    printf("Enter element to search: ");
    int key;
    scanf("%d", &key);

    sort_a9_2(arr, n);

    int pos = bin_sear_a9_2(arr, n, key);

    if (pos)
        printf("\nElement Found at Position %d\n", pos);
    else
        printf("\nElement Not Found.\n");

    return 0;
}
/*Given an array “container[]” and integer “hunt”. WAP to find whether “hunt” is present in container[] or not. 
If present, then triple the value of “hunt” and search again. Repeat these steps until “hunt” is not found. 
Finally return the value of “hunt”.
Input : container[] = {1, 2, 3} and hunt = 1 then Output : 9
Explanation: Start with hunt = 1. Since it is present in array, it becomes 3.
Now 3 is present in array and hence hunt becomes 9 . Since 9 is not present,
program returns 9.
*/
#include <stdio.h>
#include <stdlib.h>

void sort_a9_3(int *arr, int n)
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

int bin_sear_a9_3(int *container, int n, int hunt)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (container[mid] == hunt)
            return 1;

        // Agar Key chhota ho to left me jana hai
        if (hunt < container[mid])
            e = mid - 1;

        // Agar key bada ho to right me jana hai
        if (hunt > container[mid])
            s = mid + 1;
    }
    return 0;
}

int main_9_3()
{
    printf("Enter size of array: ");
    int n;
    scanf("%d", &n);
    int *container = malloc(n * sizeof(int));
    if (container == NULL)
    {
        printf("Error. Memory Not Allocated.");
        return 1;
    }

    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", (container + i));

    int hunt = 1;
    sort_a9_3(container, n);

    while(bin_sear_a9_3(container, n, hunt))
    {
        hunt *= 3;
    }

    printf("\nHunt = %d",hunt);
    return 0;
}
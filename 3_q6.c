// 21051667 Parth Bansal
// Largest Element in array using recursion
#include <stdio.h>
#include <stdlib.h>
int ass3_6_max(int a, int b)
{
    return a > b ? a : b;
}

int ass3_6_lar(int a[], int n)
{
    if (n == 1)
        return a[0];
    else
        return ass3_6_max(a[n - 1], ass3_6_lar(a, n - 1));
}

int main_3_6()
{
    int n, i;
    printf("Enter length of array ");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    printf("Enter elements of array ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int largest = ass3_6_lar(a, n);
    printf("Largest element in array is %d", largest);

    return 0;
}
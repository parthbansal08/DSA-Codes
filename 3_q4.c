// WAP to find transpose of a matrix
#include <stdio.h>
#include <stdlib.h>

int main_3_4()
{
    int i, j, r, c, t;
    printf("Enter no of rows and columns of matrix ");
    scanf("%d%d", &r, &c);
    // Converting 2-d matrix into 1-d matrix
    int *a = (int *)malloc(r * c * sizeof(int));
    // Input
    for (i = 0; i < r; i++)
    {
        printf("Enter elements of %d row ", i + 1);
        for (j = 0; j < c; j++)
            scanf("%d", &a[i * c + j]);
    }

    for (i = 0; i < r - 1; i++)
        for (j = i + 1; j < c; j++)
        {
            t = a[i * c + j];
            a[i * c + j] = a[j * c + i];
            a[j * c + i] = t;
        }

    // Output
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d ", a[i * c + j]);
        printf("\n");
    }

    return 0;
}
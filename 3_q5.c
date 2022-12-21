// WAP to find determinant of a 3x3 matrix.
#include <stdio.h>
#include <stdlib.h>

int main_3_5()
{
    int i, j, det;
    // Converting 2-d matrix into 1-d matrix
    int *a = (int *)malloc(3 * 3 * sizeof(int));
    // Input
    for (i = 0; i < 3; i++)
    {
        printf("Enter elements of %d row ", i + 1);
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i * 3 + j]);
    }

    det = a[0] * (a[4] * a[8] - a[5] * a[7]) - a[3] * (a[1] * a[8] - a[7] * a[2]) + a[6] * (a[1] * a[5] - a[2] * a[4]);

    printf("Determinant of Matrix is %d", det);

    return 0;
}
// 21051667 Parth Bansal
// Sparse Matrix

#include <stdio.h>
#include <stdlib.h>

int main_3_3()
{
    int i, j, m, n, c = 0;
    printf("Enter rows and columns ");
    scanf("%d%d", &m, &n);
    // Converting 2-d matrix into 1-d matrix
    int *a = (int *)malloc(m * n * sizeof(int));

    for (i = 0; i < m; i++)
    {
        printf("Enter elements of %d Row ", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i * n + j]);
            if (a[i * n + j] == 0)
                c++;
        }
    }

    if (c > (m * n) / 2)
        printf("Sparse Matrix");
    else
        printf("Not Sparse Matrix");

    return 0;
}
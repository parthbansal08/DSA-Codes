// 21051667 Parth Bansal
// Sparse Matrix


int main_2_9()
{
    int i, j, m, n, c = 0;
    printf("Enter rows and columns ");
    scanf("%d%d", &m, &n);
    int a[m][n];

    for (i = 0; i < m; i++)
    {
        printf("Enter elements of Row %d ", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
                c++;
        }
    }

    if (c > (m * n) / 2)
        printf("Sparse Matrix");
    else
        printf("Not Sparse Matrix");

    getch();
    return 0;
}
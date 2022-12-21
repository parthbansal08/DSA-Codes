// 21051667 Parth Bansal
#include <stdio.h>

// Non-zero terms of matrix
void ass1_7_non_zero(int n, int p[][n])
{
    int i, j, count = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            if (p[i][j])
                count++;
        }
    printf("No of non-zero elements = %d", count);
}

// Sum of elements above the leading diagonal
void ass1_7_sum_ab_ld(int m, int q[][m])
{
    int sum = 0, i, j;
    for (i = 0; i < m - 1; i++)
        for (j = i + 1; j < m; j++)
            sum += q[i][j + 1];
    printf("Sum of elements above leading diagonal = %d", sum);
}

// Display elements below minor diagonal
void ass1_7_dis_md(int n, int p[][n])
{
    int i, j;
    printf("Elements below the minor diagonal are: \n");
    for (i = 1; i < n - 1; i++)
    {
        // for space
        for (j = n - i; j > 0; j--)
            printf("\t");

        for (j = n - i; j < n; j++)
            printf("%d\t", p[i][j]);

        printf("\n");
    }
}

// Display the product of diagonal elements
void ass1_7_pdt_dia(int m, int q[][m])
{
    int i, j, pdt = 1;
    for (i = 0; i < m; i++)
        for (j = i; j <= i; j++)
        {
            if (i == j)
                pdt *= q[i][j];
        }
    printf("Product of diagonal elements = %d", pdt);
}

int main_1_7()
{
    int i, j, n;
    printf("Enter no of rows or columns of matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter the elements of matrix\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter row %d elements ", i + 1);
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
menu:
    printf("\n");
    printf("Menu:\n\n");
    printf("1: Find the no of non-zero elements in matrix.\n");
    printf("2: Find the sum of elements above the leading diagonal.\n");
    printf("4: Display elements below minor diagonal:\n");
    printf("4: Find the product of the diagonal elements,\n");
    printf("5: Exit.\n");
    printf("\nEnter your choice: ");
    int ch;
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        ass1_7_non_zero(n, a);
        goto menu;
        break;

    case 2:
        ass1_7_sum_ab_ld(n, a);
        goto menu;
        break;

    case 3:
        ass1_7_dis_md(n, a);
        goto menu;
        break;

    case 4:
        ass1_7_pdt_dia(n, a);
        goto menu;
        break;

    case 5:
        printf("You have exited successfully.");
        break;

    default:
        printf("Enter a valid choice.");
        break;
    }

    return 0;
}
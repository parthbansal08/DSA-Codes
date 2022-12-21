// 21051667 Parth Bansal
// WAP to evaluate a given polynomial eqn

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main_3_1()
{
    int i, n, x;
    float res = 0;
    printf("Enter the order of polynomial ");
    scanf("%d", &n);

    printf("Enter the value of x ");
    scanf("%d", &x);

    int *p;
    p = (int *)malloc(n * sizeof(int));
    printf("Enter coefficients\n ");
    for (i = 0; i <= n; i++)
    {
        printf("Enter coefficient of x^%d ", i);
        scanf("%d", p + i);
        res += *(p + i) * pow(x, i);
    }

    printf("The polynomial entered is ");
    for (i = 0; i <= n; i++)
    {
        if (i == n)
            printf("%d x^%d", *(p + i), i);
        else
            printf("%d x^%d + ", *(p + i), i);
    }

    printf("\nValue of Polynomial is %.2f", res);

    return 0;
}
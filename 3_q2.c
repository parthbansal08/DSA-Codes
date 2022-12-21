// 21051667 Parth Bansal
// WAP to input two polynomials and add them

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ass3_2_add_pol(float *pa, float *pb, int n)
{
    float *res;
    res = (float *)malloc(n * sizeof(float));
    printf("\n\nPolynomial After Addition\n");
    for (int i = 0; i <= n; i++)
    {
        *(res + i) = *(pa + i) + *(pb + i);
        if (i == n)
            printf("%.1f x^%d", *(res + i), i);
        else
            printf("%.1f x^%d + ", *(res + i), i);
    }
}

int main_3_2()
{
    int i, n1, n2, n3;
    float *p1, *p2;
    printf("Enter the order of polynomial 1 ");
    scanf("%d", &n1);
    printf("Enter the order of polynomial 2 ");
    scanf("%d", &n2);

    p1 = (float *)malloc(n1 * sizeof(float));
    p2 = (float *)malloc(n2 * sizeof(float));
    n3 = n1 > n2 ? n1 : n2;

    printf("Enter coefficients \nPolynomial 1\n");
    for (i = 0; i <= n1; i++)
    {
        printf("Enter coefficient of x^%d ", i);
        scanf("%f", p1 + i);
    }
    printf("\nPolynomial 2\n");
    for (i = 0; i <= n2; i++)
    {
        printf("Enter coefficient of x^%d ", i);
        scanf("%f", p2 + i);
    }

    printf("\nThe polynomial entered are \n");
    printf("\nPolynomial 1\n");
    for (i = 0; i <= n1; i++)
    {
        if (i == n1)
            printf("%.1f x^%d", *(p1 + i), i);
        else
            printf("%.1f x^%d + ", *(p1 + i), i);
    }

    printf("\nPolynomial 2\n");
    for (i = 0; i <= n2; i++)
    {
        if (i == n2)
            printf("%.1f x^%d", *(p2 + i), i);
        else
            printf("%.1f x^%d + ", *(p2 + i), i);
    }
    ass3_2_add_pol(p1, p2, n3);

    return 0;
}
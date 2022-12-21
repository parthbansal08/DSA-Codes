// 21051667 Parth Bansal
// WAP to input two polynomials and add them 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main_2_8()
{
    int i, n1,n2,n3;
    float *p1,*p2,*res;
    printf("Enter the order of polynomial 1 ");
    scanf("%d", &n1);
    printf("Enter the order of polynomial 2 ");
    scanf("%d", &n2);

    p1 = (float *)malloc(n1 * sizeof(float));
    p2 = (float *)malloc(n2 * sizeof(float));
    n3 = n1>n2?n1:n2;
    res = (float *)malloc(n3 * sizeof(float));

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
            printf("%.2f x^%d", *(p1 + i), i);
        else
            printf("%.2f x^%d + ", *(p1 + i), i);
    }

  printf("\nPolynomial 2\n");
    for (i = 0; i <= n2; i++)
    {
        if (i == n2)
            printf("%.2f x^%d", *(p2 + i), i);
        else
            printf("%.2f x^%d + ", *(p2 + i), i);
    }
    
    printf("\n\nPolynomial After Addition\n");
    for(i=0;i<=n3;i++)
    {
       *(res+i)= *(p1+i) + *(p2+i);
       if (i == n3)
            printf("%.2f x^%d", *(res + i), i);
        else
            printf("%.2f x^%d + ", *(res + i), i);
    }

    getch();
    return 0;
}
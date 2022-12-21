//21051667 Parth Bansal
// Add Two complex numbers
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct complex
{
    float re_p;
    float im_p;
};

void ass2_3_add_cal(struct complex n1, struct complex n2)
{
    float rep, imp;
    rep = n1.re_p + n2.re_p;
    imp = n1.im_p + n2.im_p;

    printf("Distance after adding is %.2f + %.2fi", rep, imp);
}

int main_2_3()
{
    struct complex n[2];
    int i;
    printf("Enter Complex Numbers ");
    for (i = 0; i < 2; i++)
    {
        printf("\nComplex No %d", i + 1);
        printf("\nEnter real part ");
        scanf("%f", &n[i].re_p);
        printf("Enter imaginary part ");
        scanf("%f", &n[i].im_p);
        printf("\n");
    }

    ass2_3_add_cal(n[0], n[1]);

    getch();
    return 0;
}
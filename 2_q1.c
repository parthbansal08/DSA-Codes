// 21051667 Parth Bansal
// WAP to enter details of n employees and calculate gross pay.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct employee
{
    char name[50];
    char gen;
    char des[50];
    char dep[50];
    float bp;
    float gp;
};

int main_2_1()
{
    int i=0, n;
    printf("Enter the no of employees: ");
    scanf("%d", &n);

    struct employee e[n];
    // Input Employee Data
   for (i = 0; i < n; i++)
    {
        printf("Employee %d\n", i + 1);
        printf("Enter employee name: ");
        scanf("\n%[^\n]s", e[i].name);
        printf("Enter gender M or F: ");
        scanf("\n%c", &e[i].gen);
        printf("Enter Designation: ");
        scanf("\n%[^\n]s", e[i].des);
        printf("Enter Department: ");
        scanf("\n%[^\n]s", e[i].dep);
        printf("Enter Basic Pay: ");
        scanf("%f", &e[i].bp);
        e[i].gp = e[i].bp + 0.25 * e[i].bp + 0.75 * e[i].bp;
        printf("\n");
    }
    char ch[50];
    printf("Enter name of employee whose details you want to see: ");
    scanf("%s", ch);
    // Display Employee Details
   for (i = 0; i < n; i++)
        if (!(strcmp(e[i].name,ch)))
        {
            printf("\nEmployee %d", i + 1);
            printf("\nEmployee Name: %s", e[i].name);
            printf("\nGender: %c", e[i].gen);
            printf("\nDesignation: %s", e[i].des);
            printf("\nDepartment: %s", e[i].dep);
            printf("\nBasic Pay: %.2f", e[i].bp);
            printf("\nGross Pay: %.2f", e[i].gp);
            printf("\n");
        }

    getch();
    return 0;
}
// 21051667 Parth Bansal
// Store information of n students using structures and dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct student
{
    int rol_no;
    char name[50];
    char br[50];
    char sec[10];
};

int main_2_5()
{
    int i = 0, n, rn;
    struct student *stu;
    printf("Enter no of students: ");
    scanf("%d", &n);
    stu = (struct student *)malloc(n * sizeof(struct student));
    if (stu == NULL)
    {
        printf("Memory block not Allocated.");
        return 1;
    }

    // Input Info of Students
    printf("\nEnter Information of Students\n\n");
    for (i = 0; i < n; i++)
    {
        printf("Student: %d\n", i + 1);
        printf("Name: ");
        scanf("\n%[^\n]s", &(stu + i)->name);
        printf("Roll No: ");
        scanf("%d", &(stu + i)->rol_no);
        printf("Branch: ");
        scanf("\n%[^\n]s", &(stu + i)->br);
        printf("Section: ");
        scanf("\n%[^\n]s", &(stu + i)->sec);
        printf("\n");
    }

    // Displaying Output of a Student by Accepting Roll No
    printf("Enter Roll No of the Student whose details you want to know: ");
    scanf("%d", &rn);
    for (i = 0; i < n; i++)
        if ((stu + i)->rol_no == rn)
        {
            printf("\nName: %s", (stu + i)->name);
            printf("\nRoll No: %d", (stu + i)->rol_no);
            printf("\nBranch: %s", (stu + i)->br);
            printf("\nSection: %s", (stu + i)->sec);
        }

    getch();
    return 0;
}
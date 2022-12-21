// Menu Driven Program of EXE Files
#include <stdio.h>
#include <stdlib.h>
#include "1_q1.c"
#include "1_q2.c"
#include "1_q3.c"
#include "1_q4.c"
#include "1_q5.c"
#include "1_q6.c"
#include "1_q7.c"
#include "1_q8.c"
#include "2_q1.c"
#include "2_q2.c"
#include "2_q3.c"
#include "2_q4.c"
#include "2_q5.c"
#include "2_q6.c"
#include "2_q7.c"
#include "2_q8.c"
#include "2_q9.c"
#include "3_q1.c"
#include "3_q2.c"
#include "3_q3.c"
#include "3_q4.c"
#include "3_q5.c"
#include "3_q6.c"
#include "3_q7.c"
#include "3_q8.c"
#include "4_q1.c"
#include "4_q2.c"
#include "4_q3.c"
#include "5_q1.c"
#include "6_q1.c"
#include "6_q2.c"
#include "6_q3.c"
#include "6_q4.c"
#include "6_q5.c"
#include "7_q1.c"
#include "7_q2.c"
#include "7_q3.c"
#include "7_q4.c"
#include "8_q1.c"
#include "8_q2.c"
#include "8_q3.c"
#include "8_q4.c"
#include "9_q1.c"
#include "9_q2.c"
#include "9_q3.c"
#include "10_q1.c"

int main()
{
    int ass = 0;
    int que;
    printf("Name:    Abhigyan Aditya\nRoll No: 2105296\nSection: CSE-40\n\n");
    printf("Assignments List:\n");
    printf("Assignment 1: 1-D Array\nAssignment 2: Structures\nAssignment 3: Polynomials and 2-D Matrix\n");
    printf("Assignment 4: Single Linked List\nAssignment 5: Single Circular Linked List\n");
    printf("Assignment 6: Doubly Linked List\nAssignment 7: Stack\nAssignment 8: Queue\nAssignment 9: Searching\nAssignment 10: Tree\n");
    printf("\nEnter Assignment No: ");
    scanf("%d", &ass);

    switch (ass)
    {
    case 1:
        printf("\nThere are 8 questions.\n1: WAP to find out the smallest and largest element stored in an array of n integers.\n");
        printf("2: Store n elements in an array and reverse them\n3: Program to find whether an item is in the array or not\n4: WAP to sort an array of n numbers.\n5: WAP to find no of elements between two elements in an array.\n6: WAP to find the NGE.\n7: Menu Driven Program of 2-D Matrix.\n8: WAP to find the minimum distance between two elements in an array.\n");
        printf("\nEnter Question No: ");
        scanf("%d", &que);
        printf("\n");
        switch (que)
        {
        case 1:
            main_1_1();
            break;

        case 2:
            main_1_2();
            break;

        case 3:
            main_1_3();
            break;

        case 4:
            main_1_4();
            break;

        case 5:
            main_1_5();
            break;

        case 6:
            main_1_6();
            break;

        case 7:
            main_1_7();
            break;

        case 8:
            main_1_8();
            break;

        default:
        printf("\nEnter a Valid Choice\n");
            break;
        }
        break;

    case 2:
        printf("\nThere are 9 questions.");
        printf("\n1: Calculate Gross Pay of Employees.\n2: Add two distance (km-m) by passing structure\n3: Add Two complex numbers by passing structires to a function.\n4: WAP to calculate Difference between two time periods.\n5: Store information of n students using structures and Dynamic Memory Allocation.\n6: WAP to read a 1-D array, print all array elements and their sum using DMA\n7: WAP to evaluate a given polynomial eqn\n8: WAP to input two polynomials and add them.\n9: Check whether a matrix is Sparse Matrix\n");
        printf("\nEnter Question No: ");
        scanf("%d", &que);
        printf("\n");
        switch (que)
        {
        case 1:
            main_2_1();
            break;

        case 2:
            main_2_2();
            break;

        case 3:
            main_2_3();
            break;

        case 4:
            main_2_4();
            break;

        case 5:
            main_2_5();
            break;

        case 6:
            main_2_6();
            break;

        case 7:
            main_2_7();
            break;

        case 8:
            main_2_8();
            break;

        case 9:
            main_2_9();
            break;

        default:
        printf("\nEnter a Valid Choice\n");
            break;
        }
        break;

    case 3:
        printf("\nThere are 8 questions.\n");
        printf("1: WAP to evaluate a given polynomial eqn.\n2: WAP to input two polynomials and add them\n3: WAP to check whether matrix is Sparse Matrix\n4: WAP to find the transpose of a matrix.\n5: WAP to find determinant of a 3x3 matrix.\n6: Largest Element in array using recursion\n7: WAP using function to find frequency of occurence of numbers in array\n8: WAP to find whether matrix is lower triangular, upper triangular or tri-diagonal matrix.\n");
        printf("\nEnter Question No: ");
        scanf("%d", &que);
        printf("\n");
        switch (que)
        {
        case 1:
            main_3_1();
            break;

        case 2:
            main_3_2();
            break;

        case 3:
            main_3_3();
            break;

        case 4:
            main_3_4();
            break;

        case 5:
            main_3_5();
            break;

        case 6:
            main_3_6();
            break;

        case 7:
            main_3_7();
            break;

        case 8:
            main_3_8();
            break;

        default:
        printf("\nEnter a Valid Choice\n");
            break;
        }
        break;

    case 4:
        printf("\nThere are 3 questions.\n");
        printf("1: Menu driven program of linked list\n2: WAP to display linked list in reverse order\n3: WAP to print mth node from the last from a list of n nodes\n");
        printf("\nEnter Question No: ");
        scanf("%d", &que);
        printf("\n");
        switch (que)
        {
        case 1:
            main_4_1();
            break;

        case 2:
            main_4_2();
            break;

        case 3:
            main_4_3();
            break;

        default:
        printf("\nEnter a Valid Choice\n");
            break;
        }
        break;

    case 5:
        printf("\nThere is only 1 program.\nMenu driven program of Circular linked list\n\n");
        main_5_1();
        break;

    case 6:
       printf("\nThere are 5 questions.\n");
       printf("\n1: WAP to create a doubly linked list of n nodes and display.\n2: WAP to reverse elements in a doubly linked list.\n3: Menu driven program of doubly linked list\n4: WAP to remove duplicates in a sorted double linked list.\n5: WAP to implement doubly linked list using single linked list.\n");
       printf("\nEnter Question No: ");
        scanf("%d", &que);
        printf("\n");
        switch (que)
        {
        case 1:
            main_6_1();
            break;

        case 2:
            main_6_2();
            break;

        case 3:
            main_6_3();
            break;

         case 4:
            main_6_4();
            break;

        case 5:
            main_6_5();
            break;

        default:
        printf("\nEnter a Valid Choice\n");
            break;
        }
        break;

    case 7:
       printf("\nThere are 4 questions.\n");
       printf("\n1: Menu Driven Program of Stack using Array.\n2: Menu Driven Program of Stack using Linked List.\n3: WAP to convert an infix expression into its equivalent.\n4: WAP to convert an infix expression into its equivalent prefix notation.\n");
       printf("\nEnter Question No: ");
        scanf("%d", &que);
        printf("\n");
        switch (que)
        {
        case 1:
            main_7_1();
            break;

        case 2:
            main_7_2();
            break;

        case 3:
            main_7_3();
            break;

         case 4:
            main_7_4();
            break;

        default:
        printf("\nEnter a Valid Choice\n");
            break;
        }
        break;

    case 8:
        printf("\nThere are 4 questions.\n");
        printf("1: Menu Driven Program of Queue using Static Array\n2: Menu Driven Program of Queue using Linked List.\n3: Menu Driven Program of Circular Queue using Static Array.\n4: Menu driven program to implement Deques.\n");
        printf("\nEnter Question No: ");
        scanf("%d", &que);
        printf("\n");
        switch (que)
        {
        case 1:
            main_8_1();
            break;

        case 2:
            main_8_2();
            break;

        case 3:
            main_8_3();
            break;

         case 4:
            main_8_4();
            break;

        default:
        printf("\nEnter a Valid Choice\n");
            break;
        }
        break;

    case 9:
        printf("\nThere are 3 questions.\n");
        printf("\n1: WAP to read an array of integers and search for an element using linear search.\n2: WAP to read an array and search for an element using Binary Search.\n3: Container[] and integer hunt and perform Binary Search.\n");
        printf("\nEnter Question No: ");
        scanf("%d", &que);
        printf("\n");
        switch (que)
        {
        case 1:
            main_9_1();
            break;

        case 2:
            main_9_2();
            break;

        case 3:
            main_9_3();
            break;

        default:
        printf("\nEnter a Valid Choice\n");
            break;
        }
        break;

    case 10:
    printf("\nThere is only 1 program.\nMenu driven program of Tree\n");
        main_10_1();
    break;

    default:
    printf("\nEnter a Valid Choice\n");
        break;
    }
    //printf("\nPress any Key to exit");
    getch();
    return 0;
}
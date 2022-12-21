/*Menu Driven Program of Queue using Static Array
1: Enqueue  2: Dequeue  3: Display Elemnts  4: IsEmpty  5: IsFull */
#include <stdio.h>
int arr[10];
int F_8_1 = -1;
int R_8_1 = -1;
int Max_8_1 = 10;

int isEmpty_8_1();
int isFull_8_1();

// 1: Enqueue
void enqueue_a8_1(int x)
{
    if (R_8_1 >= Max_8_1)
    {
        printf("\nOverflow. Queue is FULL.\n");
        return;
    }
    else
    {
        arr[++R_8_1] = x;
        if (F_8_1 == -1)
            F_8_1 = 0;
    }
}

// 2: Dequeue
void dequeue_a8_1()
{
    if (F_8_1 == -1)
    {
        printf("\nUnderflow. Queue is EMPTY.\n");
        return;
    }
    else
    {
        if (F_8_1 == R_8_1)
            F_8_1 = R_8_1 = -1;
        else
            F_8_1 += 1;
    }
}

// 3: Display Elemnts
void display_a8_1()
{
    if (isEmpty_8_1())
    {
        printf("\nEmpty Queue.\n");
        return;
    }
    else
    {
        int t = F_8_1;
        printf("\nElements of Queue are: ");
        for (; t <= R_8_1; t++)
            printf("%d ", arr[t]);
        printf("\n");
    }
}

// 4: isEmpty_8_1
int isEmpty_8_1()
{
    if (F_8_1 == -1)
        return 1;
    return 0;
}

// 5: isFull_8_1
int isFull_8_1()
{
    if (R_8_1 + 1 == Max_8_1)
        return 1;
    return 0;
}

int main_8_1()
{
    printf("\nMenu: \n1: Enqueue\n2: Dequeue\n3: Display Elements\n4: IsFull\n5: IsEmpty\n6: Exit.");
    while (1)
    {
        printf("\nYour Choice: ");
        int ch;
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            int x;
            printf("Enter element to insert: ");
            scanf("%d", &x);
            enqueue_a8_1(x);
            break;

        case 2:
            dequeue_a8_1();
            break;

        case 3:
            display_a8_1();
            break;

        case 4:
            if (isFull_8_1())
                printf("\nQueue is Full\n");
            else
                printf("\nQueue is Not Full\n");
            break;

        case 5:
            if (isEmpty_8_1())
                printf("\nQueue is Empty\n");
            else
                printf("\nQueue is Not Empty\n");
            break;

        case 6:
            goto level;
            break;

        default:
            printf("\nInvalid Choice. Try Again.\n");
            break;
        }
    }
level:
    printf("\nYou have Exited Successfully.");

    return 0;
}

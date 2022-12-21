/*Menu Driven Program of Circular Queue using Static Array
1: Enqueue  2: Dequeue  3: Peek  4: Display Elemnts  5: IsEmpty  6: IsFull */
#include <stdio.h>
int arr[10];
int F_8_3 = -1;
int R_8_3 = -1;
int Max_8_3 = 10;

int isEmpty_a8_3();
int isFull_a8_3();

// 1: Enqueue
void enqueue_a8_3(int x)
{
    if ((R_8_3 + 1) % Max_8_3 == F_8_3)
    {
        printf("Overflow. Queue is FULL.\n");
        return;
    }
    else
    {
        R_8_3 = (R_8_3 + 1) % Max_8_3;
        arr[R_8_3] = x;
        if (F_8_3 == -1)
            F_8_3 = 0;
    }
}

// 2: Dequeue
void dequeue_a8_3()
{
    if (isEmpty_a8_3())
    {
        printf("Underflow. Queue is EMPTY.\n");
        return;
    }
    else
    {
        F_8_3 = (F_8_3 + 1) % Max_8_3;
        if (F_8_3 > R_8_3)
        {
            F_8_3 = R_8_3 = -1;
            printf("All elements have been dequed.\n");
        }
    }
}

// 3: Peek
void peek_a8_3()
{
    if (isEmpty_a8_3())
    {
        printf("Empty Queue.\n");
        return;
    }
    else
    {
        printf("Peek: %d\n", arr[F_8_3]);
    }
}

// 4: Display Elemnts
void display_a8_3()
{
    if (isEmpty_a8_3())
    {
        printf("\nEmpty Queue.\n");
        return;
    }
    else
    {
        int t = F_8_3;
        printf("Elements of Queue are: ");
        for (; t <= R_8_3; t++)
            printf("%d ", arr[t]);
        printf("\n");
    }
}

// 5: IsEmpty
int isEmpty_a8_3()
{
    if (F_8_3 == -1)
        return 1;
    return 0;
}

// 6: IsFull
int isFull_a8_3()
{
    if ((R_8_3 + 1) % Max_8_3 == F_8_3)
        return 1;
    return 0;
}

int main_8_3()
{
    printf("\nMenu: \n1: Enqueue\n2: Dequeue\n3: Peek\n4: Display Elements\n5: IsFull\n6: IsEmpty\n7: Exit.");
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
            enqueue_a8_3(x);
            break;

        case 2:
            dequeue_a8_3();
            break;

        case 3:
            peek_a8_3();
            break;

        case 4:
            display_a8_3();
            break;

        case 5:
            if (isFull_a8_3())
                printf("Queue is Full\n");
            else
                printf("Queue is Not Full\n");
            break;

        case 6:
            if (isEmpty_a8_3())
                printf("Queue is Empty\n");
            else
                printf("Queue is Not Empty\n");
            break;

        case 7:
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
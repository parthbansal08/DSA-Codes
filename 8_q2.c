/*Menu Driven Program of Queue using Linked List
1: Enqueue  2: Dequeue  3: Peek  4: Display Elemnts  5: IsEmpty */

#include <stdio.h>
#include <stdlib.h>

struct node_8_2
{
    int data;
    struct node_8_2 *next;
};

struct node_8_2 *F_8_2 = NULL;
struct node_8_2 *R_8_2 = NULL;

int isEmpty_a8_2();

// 1: Enqueue
void enqueue_a8_2(int x)
{
    struct node_8_2 *N = (struct node_8_2 *)malloc(sizeof(struct node_8_2));
    if (N == NULL)
    {
        printf("\nOverflow.\n");
        return;
    }

    if (F_8_2 == NULL)
    {
        N->data = x;
        N->next = NULL;
        F_8_2 = N;
        R_8_2 = N;
    }
    else
    {
        N->data = x;
        N->next = NULL;
        R_8_2->next = N;
        R_8_2 = N;
    }
}

// 2: Dequeue
void dequeue_a8_2()
{
    if (isEmpty_a8_2())
    {
        printf("\nStack is Empty. Deletion Not Possible.\n");
        return;
    }
    else
    {
        struct node_8_2 *temp = F_8_2;
        F_8_2 = F_8_2->next;
        free(temp);
    }
}

// 3: Peek
void peek_a8_2()
{
    if (isEmpty_a8_2())
    {
        printf("\nQueue is Empty.\n");
        return;
    }
    printf("%d\n", F_8_2->data);
}

// 4: Display contents
void display_a8_2()
{
    if (isEmpty_a8_2())
    {
        printf("\nQueue is Empty.\n");
        return;
    }
    struct node_8_2 *temp = NULL;
    printf("\nElements of Queue are: ");
    for (temp = F_8_2; temp != NULL; temp = temp->next)
        printf("%d ", temp->data);
}

// 5: IsEmpty
int isEmpty_a8_2()
{
    if (F_8_2 == NULL)
        return 1;
    return 0;
}

int main_8_2()
{
    printf("\nMenu: \n1: Enqueue\n2: Dequeue\n3: Peek\n4: Display Elements\n5: IsEmpty\n6: Exit.");
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
            enqueue_a8_2(x);
            break;

        case 2:
            dequeue_a8_2();
            break;

        case 3:
            peek_a8_2();
            break;

        case 4:
           // printf("\nPrinting: %d %d %d\n",F->data,F->next->data,F->next->next->data);
            display_a8_2();
            break;

        case 5:
            if (isEmpty_a8_2())
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
    printf("You have Exited Successfully.");

    return 0;
}
//21051667 Parth Bansal CSE 40
// WAP to implement doubly linked list using single linked list.
#include <stdio.h>
#include <stdlib.h>

struct node_6_5
{
    int info;
    struct node_6_5 *next;
};
struct node_6_5 *head_6_5 = NULL;

void cr_sll_5(int n)
{
    struct node_6_5 *N, *M;
    int i = 0;
    while (i < n)
    {
        if (head_6_5 == NULL)
        {
            N = (struct node_6_5 *)malloc(sizeof(struct node_6_5));
            printf("Enter the info of 1st Node: ");
            scanf("%d", &N->info);
            N->next = NULL;
            head_6_5 = N;
        }
        else
        {
            printf("Enter info of %d node: ", i + 1);
            M = (struct node_6_5 *)malloc(sizeof(struct node_6_5));
            scanf("%d", &M->info);
            N->next = M;
            M->next = NULL;
            N = M;
        }
        i++;
    }
}

// Traversal
void display_sll_5()
{
    struct node_6_5 *temp;
    printf("\nThe Linked List is ");
    for (temp = head_6_5; temp != NULL; temp = temp->next)
        printf("%d ", temp->info);
    printf("\n");
}

// Moving front and back
void a6_move_5()
{
    struct node_6_5 *p, *q;
    int ch;
    p = q = head_6_5;
    printf("Pointer at %d\n", q->info);

    do
    {
        printf("\nMenu\n1: Move Front.\n2: Move Back\n3: Exit\nYour choice: ");
        scanf("%d", &ch);
        printf("%d\n", ch);

        switch (ch)
        {
        // Move Front
        case 1:
            if (q->next != NULL)
            {
                q = q->next;
                printf("\nPointer at %d node.\n", q->info);
            }
            else
                printf("\nAlready at Last Node %d. Cannot move ahead.\n", q->info);
            break;

        // Move Back
        case 2:
            while (p->next != q)
            {
                p = p->next;
            }
            if (p == q)
                printf("\nAlready at First Node %d. Cannot move ahead.\n");
            else
            {
                q = p;
                p = head_6_5;
                printf("\nPointer at %d node.\n", q->info);
            }
            break;

        case 3:
            return;

        default:
            printf("\nInvalid Choice. Try Again.\n");
        }
    } while (1);
}

int main_6_5()
{
    int n;
    printf("How many nodes you want to create? ");
    scanf("%d", &n);
    cr_sll_5(n);
    display_sll_5();
    a6_move_5();

    return 0;
}

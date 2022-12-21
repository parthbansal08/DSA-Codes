//21051667 Parth Bansal CSE 40
// WAP to create a doubly linked list of n nodes and display
#include <stdio.h>
#include <stdlib.h>

struct node_6_1
{
    int info;
    struct node_6_1 *prev;
    struct node_6_1 *next;
};
struct node_6_1 *head_6_1 = NULL;

void create_a6_1(int n)
{
    struct node_6_1 *N, *M;
    int i = 0;
    while (i < n)
    {
        if (head_6_1 == NULL)
        {
            N = (struct node_6_1 *)malloc(sizeof(struct node_6_1));
            printf("Enter the info of 1st Node: ");
            scanf("%d", &N->info);
            N->next = NULL;
            N->prev = NULL;
            head_6_1 = N;
        }
        else
        {
            printf("Enter info of %d node: ", i + 1);
            M = (struct node_6_1 *)malloc(sizeof(struct node_6_1));
            scanf("%d", &M->info);
            N->next = M;
            M->prev = N;
            M->next = NULL;
            N = M;
        }
        i++;
    }
}

// Traversal (Menu 1)
void display_a6_1()
{
    struct node_6_1 *temp;
    printf("\nThe Linked List is ");
    for (temp = head_6_1; temp != NULL; temp = temp->next)
        printf("%d ", temp->info);
    printf("\n");
}

int main_6_1()
{
    int n;

    printf("\n\nMenu\n1: Creation\n2: Traversal\n3: Exit.\n");
    printf("Enter your choice: ");
    int ch;

    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter no of nodes you want to create: ");
        scanf("%d", &n);

        create_a6_1(n);
        break;

    case 2:
        display_a6_1();
        break;
    case 3:
        break;

    default:
        printf("Enter a valid value.");
        break;
    }
    printf("You have successfully exited.");
    return 0;
}
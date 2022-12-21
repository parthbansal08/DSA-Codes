//21051667 Parth Bansal CSE 40
// WAP to remove duplicates in a sorted double linked list.
#include <stdio.h>
#include <stdlib.h>

struct node_6_4
{
    int info;
    struct node_6_4 *prev;
    struct node_6_4 *next;
};
struct node_6_4 *head_6_4 = NULL;

void create_a6_4(int n)
{
    struct node_6_4 *N, *M;
    int i = 0;
    while (i < n)
    {
        if (head_6_4 == NULL)
        {
            N = (struct node_6_4 *)malloc(sizeof(struct node_6_4));
            printf("Enter the info of 1st Node: ");
            scanf("%d", &N->info);
            N->next = NULL;
            N->prev = NULL;
            head_6_4 = N;
        }
        else
        {
            printf("Enter info of %d node: ", i + 1);
            M = (struct node_6_4 *)malloc(sizeof(struct node_6_4));
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
void display_a6_4()
{
    struct node_6_4 *temp;
    printf("\nThe Linked List is ");
    for (temp = head_6_4; temp != NULL; temp = temp->next)
        printf("%d ", temp->info);
    printf("\n");
}

// Remove duplicates function
void a6_rem_dup_4()
{
    struct node_6_4 *temp, *del;
    for (temp = head_6_4; temp->next != NULL; temp = temp->next)
    {
        while (temp->info == temp->next->info)
        {
            del = temp->next;
            temp->next = del->next;
            del->next->prev = temp;
            free(del);
            del = NULL;
        }
    }
    printf("\nDuplicates removed Successfully.\n");
}

int main_6_4()
{
    int n;
    printf("Enter no of nodes you want to create: ");
    scanf("%d", &n);
    create_a6_4(n);
    a6_rem_dup_4(); // Deleting duplicates
    printf("\nAfter Removing Duplicates:\n");
    display_a6_4();

    return 0;
}
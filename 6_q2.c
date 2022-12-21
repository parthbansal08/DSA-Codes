//21051667 Parth Bansal CSE 40
// WAP to reverse elements in a doubly linked list.

#include <stdio.h>
#include <stdlib.h>

struct node_6_2
{
    int info;
    struct node_6_2 *prev;
    struct node_6_2 *next;
};
struct node_6_2 *head_6_2 = NULL;

void create_a6_2(int n)
{
    struct node_6_2 *N, *M;
    int i = 0;
    while (i < n)
    {
        if (head_6_2 == NULL)
        {
            N = (struct node_6_2 *)malloc(sizeof(struct node_6_2));
            printf("Enter the info of 1st Node: ");
            scanf("%d", &N->info);
            N->next = NULL;
            N->prev = NULL;
            head_6_2 = N;
        }
        else
        {
            printf("Enter info of %d node: ", i + 1);
            M = (struct node_6_2 *)malloc(sizeof(struct node_6_2));
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
void display_a6_2()
{
    struct node_6_2 *temp;
    printf("\nThe Linked List is ");
    for (temp = head_6_2; temp != NULL; temp = temp->next)
        printf("%d ", temp->info);
    printf("\n");
}

void rev_seq_a6_2()
{
    struct node_6_2 *temp,*t;
    for(temp = head_6_2; temp->next != NULL; temp = temp->next)
    ;
    temp->next = temp->prev;
    temp->prev = NULL;
    head_6_2 = temp;
    for(temp = head_6_2->next; temp != NULL; temp = temp->next)
    {
        t = temp->next;
        temp->next = temp->prev;
        temp->prev = t;
    }
    printf("The Linked List is reversed successfully.");
    display_a6_2();
}

int main_6_2()
{
    int n;
    printf("Enter no of nodes you want to create: ");
    scanf("%d", &n);
    create_a6_2(n);
    rev_seq_a6_2();

    return 0;
}
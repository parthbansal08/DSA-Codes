//21051667 Parth Bansal CSE 40
// Stacks using Linked List
#include <stdio.h>
#include <stdlib.h>

struct node_7_2
{ 
    int info;
    struct node_7_2 *next;
};
struct node_7_2 *top_7_2 = NULL;

// Check if stack is empty
int empty_7_2()
{
    if (top_7_2 == NULL)
        return 1;
    else
        return 0;
}

// push
void push_7_2()
{
    printf("Enter element to push: ");
    int n;
    scanf("%d", &n);
    struct node_7_2 *N = (struct node_7_2 *)malloc(sizeof(struct node_7_2));

    if (N == NULL)
    {
        printf("\nStack Overflow. Push not possible.\n");
        return;
    }

    if (empty_7_2())
    {
        N->info = n;
        N->next = NULL;
        top_7_2 = N;
    }
    else
    {
        N->info = n;
        N->next = top_7_2;
        top_7_2 = N;
    }
}

// pop
void pop_7_2()
{
    struct node_7_2 *temp = NULL;
    if (empty_7_2())
        printf("\nStack is Empty. Deletion not Possible.\n");
    else
    {
        temp = top_7_2;
        top_7_2 = top_7_2->next;
        free(temp);
    }
}

// Display contents of stack
void display_a7_2()
{
    if (empty_7_2())
        printf("\nStack is Empty. Push some elements.\n");
    else
    {
        struct node_7_2 *temp = NULL;
        for (temp = top_7_2; temp != NULL; temp = temp->next)
            printf("%d ", temp->info);
        printf("\n");
    }
}

int main_7_2()
{
    while (1)
    {
        printf("\nMenu\n1: Push\n2: Pop\n3: Check if Stack is Empty\n4: Display Contents of Stack.\n5: Exit\n");
        int ch;
        printf("Enter your choice: ");
        scanf("%d", &ch);
        printf("\n");
        switch (ch)
        {
        case 1:
            push_7_2();
            break;
        
        case 2:
        pop_7_2();
        break;

        case 3:
        empty_7_2();
        break;

        case 4:
        display_a7_2();
        break;

        case 5:
        return 0;
        break;
        
        default:
        printf("\nEnter a Valid Choice.\n");
            break;
        }
    }
    return 0;
}
// 210516667 Parth Bansal
//  Menu driven program of Circular linked list
#include <stdio.h>
#include <stdlib.h>

struct node_5_1
{
    int info;
    struct node_5_1 *link;
};
struct node_5_1 *head_5_1 = NULL;
struct node_5_1 *last;

void create_a5(int n)
{
    struct node_5_1 *N, *M;
    int i = 0;
    while (i < n)
    {
        if (head_5_1 == NULL)
        {
            N = (struct node_5_1 *)malloc(sizeof(struct node_5_1));
            printf("Enter the info of 1st Node: ");
            scanf("%d", &N->info);
            head_5_1 = N;
            N->link = head_5_1;
        }
        else
        {
            printf("Enter info of %d node_5_1: ", i + 1);
            M = (struct node_5_1 *)malloc(sizeof(struct node_5_1));
            scanf("%d", &M->info);
            N->link = M;
            M->link = head_5_1;
            N = M;
        }
        last = M;
        i++;
    }
}

// Traversal (Menu 1)
void display_a5()
{
    struct node_5_1 *temp;
    printf("\nThe Linked List is ");
    for (temp = head_5_1; temp->link->info != head_5_1->info; temp = temp->link)
        printf("%d ", temp->info);
    printf("%d", temp->info);
    printf("\n");
}

// Menu 2 Check if List is Empty
void empty_a5()
{
    if (head_5_1 == NULL)
        printf("List is Empty.");
    else
        printf("List is Not Empty.");
}

// Menu 3 Insertion
void inser_a5()
{
    int ch;
    struct node_5_1 *newn = (struct node_5_1 *)malloc(sizeof(struct node_5_1));
    struct node_5_1 *temp = (struct node_5_1 *)malloc(sizeof(struct node_5_1));

    printf("\nMenu\n1: Insertion at Beginning.\n2: Insertion at end.\n3: Insertion at any position.\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    // Input
    printf("Enter value: ");
    scanf("%d", &newn->info);
    switch (ch)
    {
    case 1: // Beginning
        if (head_5_1 == NULL)
        {
            head_5_1 = newn;
            newn->link = head_5_1;
        }
        else
        {
            newn->link = head_5_1;
            head_5_1 = newn;
            last->link = head_5_1;
        }
        break;

    case 2: // End
        if (head_5_1 == NULL)
        {
            head_5_1 = newn;
            newn->link = head_5_1;
        }
        else
        {
            for (temp = head_5_1; temp->link != head_5_1; temp = temp->link)
                ;
            temp->link = newn;
            newn->link = head_5_1;
            last = newn;
        }
        break;

    case 3: // Any Position
        printf("Enter Position: ");
        int pos;
        scanf("%d", &pos);
        if (head_5_1 == NULL)
        {
            head_5_1 = newn;
            newn->link = head_5_1;
        }
        else
        {
            int i;
            for (i = 1, temp = head_5_1; i < pos - 1; temp = temp->link, i++)
                ;
            newn->link = temp->link;
            temp->link = newn;
        }
        break;
    }
    display_a5();
}

// Menu 4 Delete node_5_1
void delete_a5()
{
    struct node_5_1 *temp = (struct node_5_1 *)malloc(sizeof(struct node_5_1));
    printf("\nMenu\n1: Delete at Beginning.\n2: Delete at End.\n3: Delete at any position.\n");
    printf("Enter your choice: ");
    int ch;
    scanf("%d", &ch);

    switch (ch)
    {
    case 1: // Beginning
        if (head_5_1 == NULL)
        {
            printf("List is Empty, Deletion not possible");
        }
        else
        {
            temp = head_5_1;
            head_5_1 = head_5_1->link;
            free(temp);
            last->link = head_5_1;
        }
        break;

    case 2: // End
        if (head_5_1 == NULL)
        {
            printf("List is Empty, Deletion not possible");
        }
        else if (head_5_1->link == head_5_1)
        {
            free(head_5_1);
            head_5_1 = NULL;
        }
        else
        {
            for (temp = head_5_1; temp->link->link != head_5_1; temp = temp->link)
                ;
            free(temp->link);
            temp->link = head_5_1;
        }
        break;

    case 3: // Any Position
        printf("Enter Position: ");
        int pos;
        scanf("%d", &pos);
        if (head_5_1 == NULL)
        {
            printf("List is Empty, Deletion not possible");
        }
        else if (head_5_1->link == head_5_1)
        {
            free(head_5_1);
            head_5_1 = NULL;
        }
        else
        {
            int i;
            for (i = 1, temp = head_5_1; i < pos - 1; temp = temp->link, i++)
                ;
            struct node_5_1 *ptr;
            ptr = temp->link;
            temp->link = temp->link->link;
            free(ptr);
        }
        break;
    }
    display_a5();
}

// Menu 5 Delete node for a given key
void del_key_a5()
{
    printf("Enter Key: ");
    int key;
    scanf("%d", &key);
    struct node_5_1 *temp;
    temp = head_5_1;
    if (temp->info == key)
    {
        struct node_5_1 *ptr;
        ptr = temp->link;
        head_5_1 = ptr;
        free(temp);
        display_a5();
    }
    else
    {
        int flag = 1;
        do
        {
            if (temp->link->info == key)
            {
                flag = 0;
                break;
            }
            temp = temp->link;
        } while (temp != head_5_1);
        if (flag == 0)
        {
            struct node_5_1 *p1;
            p1 = temp->link;
            temp->link = temp->link->link;
            free(p1);
            printf("Key Found.\n");
            display_a5();
        }
        else
            printf("Key not found.");
    }
}

// Menu 6 Count no of nodes
void count_a5()
{
    struct node_5_1 *temp;
    int c = 0;
    for (temp = head_5_1; temp->link != head_5_1; temp = temp->link)
        c++;
    c++;
    printf("No of nodes is %d", c);
}

// Menu 7 Search for an element
void search_a5()
{
    printf("Enter no to search: ");
    int key;
    scanf("%d", &key);
    struct node_5_1 *temp = head_5_1;
    do
    {
        if (temp->info == key)
        {
            printf("Element found.");
            return;
        }
        temp = temp->link;
    } while (temp != head_5_1);
    printf("Element not found.");
}

int main_5_1()
{
    int n;
    printf("Enter no of nodes you want to create: ");
    scanf("%d", &n);

    create_a5(n);

    printf("\n\nMenu\n1: Traversal\n2: Check if list is empty.\n3: Insertion.\n4: Deletion.\n");
    printf("5: Deletion for a key.\n6: Count no of nodes.\n7: Search for an element.\n");
    printf("Enter your choice: ");
    int ch;
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        display_a5();
        break;

    case 2:
        empty_a5();
        break;

    case 3:
        inser_a5();
        break;

    case 4:
        delete_a5();
        break;

    case 5:
        del_key_a5();
        break;

    case 6:
        count_a5();
        break;

    case 7:
        search_a5();
        break;

    default:
        printf("Enter a valid value.");
        break;
    }
    return 0;
}
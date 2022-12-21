// WAP to print mth node from the last from a list of n nodes
#include <stdio.h>
#include <stdlib.h>

struct node_4_3
{
    int info;
    struct node_4_3 *link;
};

struct node_4_3 *head_4_3;

void create_a4_3(int n)
{
    struct node_4_3 *N, *M;
    int i = 0;
    while (i < n)
    {
        if (head_4_3 == NULL)
        {
            N = (struct node_4_3 *)malloc(sizeof(struct node_4_3));
            printf("Enter the info of 1st Node: ");
            scanf("%d", &N->info);
            N->link = NULL;
            head_4_3 = N;
        }
        else
        {
            printf("Enter info of %d node: ", i + 1);
            M = (struct node_4_3 *)malloc(sizeof(struct node_4_3));
            scanf("%d", &M->info);
            N->link = M;
            M->link = NULL;
            N = M;
        }
        i++;
    }
}

void display_a4_3()
{
    struct node_4_3 *temp = (struct node_4_3 *)malloc(sizeof(struct node_4_3));
    for (temp = head_4_3; temp != NULL; temp = temp->link)
        printf("%d ", temp->info);
    printf("\n");
}

void display_mth_a4_3(int m, int n)
{
    int i = 1;
    struct node_4_3 *temp = (struct node_4_3 *)malloc(sizeof(struct node_4_3));
    for (temp = head_4_3; i <= n - m; temp = temp->link, i++)
        ;

    printf("%d ", temp->info);
    printf("\n");
}

int main_4_3()
{
    int n, m;
    printf("Enter no of nodes you want to create: ");
    scanf("%d", &n);
    create_a4_3(n);
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("\nList entered is ");
    display_a4_3();
    printf("%dth element from end is ", m);
    display_mth_a4_3(m, n);

    return 0;
}
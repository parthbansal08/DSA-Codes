//WAP to display linked list in reverse order
#include <stdio.h>
#include <stdlib.h>

struct node_4_2{
    int info;
    struct node_4_2 *link;
};

struct node_4_2 *head_4_2;

void create_a4_2(int n)
{
    struct node_4_2 *N, *M;
    int i = 0;
    while (i < n)
    {
        if (head_4_2 == NULL)
        {
            N = (struct node_4_2 *)malloc(sizeof(struct node_4_2));
            printf("Enter the info of 1st Node: ");
            scanf("%d", &N->info);
            N->link = NULL;
            head_4_2 = N;
        }
        else
        {
            printf("Enter info of %d node: ", i + 1);
            M = (struct node_4_2 *)malloc(sizeof(struct node_4_2));
            scanf("%d", &M->info);
            N->link = M;
            M->link = NULL;
            N = M;
        }
        i++;
    }
}

void display_a4_2()
{
    struct node_4_2 *temp = (struct node_4_2 *)malloc(sizeof(struct node_4_2));
    for(temp = head_4_2; temp != NULL; temp = temp->link)
    printf("%d ",temp->info);
    printf("\n");
}

void dis_rev_a4_2(struct node_4_2 *t)
{
   if(t)
   {
        dis_rev_a4_2(t->link);
        printf("%d ",t->info);
   }
}

int main_4_2()
{
    int n;
    printf("Enter no of nodes you want to create: ");
    scanf("%d", &n);
    create_a4_2(n);
    printf("\nList entered is ");
    display_a4_2();
    printf("List in reversed order is ");
    dis_rev_a4_2(head_4_2);

    return 0;
}
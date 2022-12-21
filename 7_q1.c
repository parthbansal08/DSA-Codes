//21051667 Parth Bansal CSE 40
//Stack using array
#include <stdio.h>

int arr[10];
int top_7_1 = -1;
int max_7_1 = 10;

void push_7_1(int n)
{
    if(top_7_1 >= max_7_1)
    {
        printf("\nStack Overflow. Push not possible.\n");
        return;
    }
    arr[++top_7_1] = n;
}

void display_7_1()
{
    int i = top_7_1;
    printf("\nThe Contents of Stack are: ");
    for (; i >= 0; i--)
    printf("%d ",arr[i]);
    printf("\n");
}

void pop_7_1()
{
    if(top_7_1 >= 0)
    top_7_1--;
    else
    printf("\nStack is Empty. Pop not possible.\n");
}

void check_empty_7_1()
{
    if(top_7_1 < 0)
    printf("\nStack is Empty.\n");
    else
    printf("\nStack is not Empty.\n");
}

int main_7_1()
{
    do
    {
        printf("\nMenu.\n1: Push\n2: Pop\n3: Check if Stack is Empty\n4: Display Contents of Stack.\n5: Exit.\n");
        printf("Enter your choice: ");
        int ch;
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            int x;
            printf("Enter no to push: ");
            scanf("%d",&x);
            printf("\n");
            push_7_1(x);
            break;

        case 2:
            pop_7_1();
            break;

        case 3:
            check_empty_7_1();
            break;

        case 4:
            display_7_1();
            break;
        
        case 5:
            return 0;
        
        default:
        printf("\nInvalid Choice. Try Again.\n");
            break;
        }

    } while (1);
    
}
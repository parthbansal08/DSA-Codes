// q3. WAP to convert an infix expression into its equivalent
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char data;
    struct Node *next;
} *top_7_3 = NULL;

void push_7_3(char x)
{
    struct Node *t;
    t = malloc(sizeof(struct Node));

    if (t == NULL)
        printf("Stack is full\n");
    else
    {
        t->data = x;
        t->next = top_7_3;
        top_7_3 = t;
    }
}

char pop_7_3()
{
    struct Node *t;
    char x = -1;

    if (top_7_3 == NULL)
        printf("Stack is Empty\n");
    else
    {
        t = top_7_3;
        top_7_3 = top_7_3->next;
        x = t->data;
        free(t);
    }
    return x;
}

void Display_7_3()
{
    struct Node *p;
    p = top_7_3;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int isBalanced_7_3(char *exp)
{
    int i;

    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            push_7_3(exp[i]);
        else if (exp[i] == ')')
        {
            if (top_7_3 == NULL)
                return 0;
            pop_7_3();
        }
    }
    if (top_7_3 == NULL)
        return 1;
    else
        return 0;
}

int pre_7_3(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    return 0;
}

int isOperand_7_3(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
        return 0;
    else
        return 1;
}

char *InToPost_7_3(char *infix)
{
    int i = 0, j = 0;
    char *postfix;
    int len = strlen(infix);
    postfix = malloc((len + 2) * sizeof(char));

    while (infix[i] != '\0')
    {
        if (isOperand_7_3(infix[i]))
            postfix[j++] = infix[i++];
        else
        {
            if (pre_7_3(infix[i]) > pre_7_3(top_7_3->data))
                push_7_3(infix[i++]);
            else
            {
                postfix[j++] = pop_7_3();
            }
        }
    }
    while (top_7_3 != NULL)
        postfix[j++] = pop_7_3();
    postfix[j] = '\0';
    return postfix;
}

int main_7_3()
{
    char *infix = NULL; //"a+b*c-d/e";
    printf("Enter String to find Postfix: ");
    infix = (char *)malloc(100 * sizeof(char));
    scanf("%s", infix);

    push_7_3('#');

    char *postfix = InToPost_7_3(infix);

    printf("%s ", postfix);

    return 0;
}
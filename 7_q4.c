// 4.WAP to convert an infix expression into its equivalent prefix notation.

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 100
char st[MAX];
int top_7_4 = -1;
void reverse_7_4(char str[]);
void push_7_4(char st[], char);
char pop_7_4(char st[]);
void InfixtoPostfix_7_4(char source[], char target[]);
int getPriority_7_4(char);
char infix[100], postfix[100], temp[100];

int main_7_4()
{
    printf("\n Enter any infix expression : ");
    gets(infix);
    reverse_7_4(infix);
    strcpy(postfix, "");
    InfixtoPostfix_7_4(temp, postfix);
    printf("\n The corresponding postfix expression is : ");
    puts(postfix);
    strcpy(temp, "");
    reverse_7_4(postfix);
    printf("\n The prefix expression is : \n");
    puts(temp);
    getch();
    return 0;
}
void reverse_7_4(char str[])
{
    int len, i = 0, j = 0;
    len = strlen(str);
    j = len - 1;
    while (j >= 0)
    {
        if (str[j] == '(')
            temp[i] = ')';
        else if (str[j] == ')')
            temp[i] = '(';
        else
            temp[i] = str[j];
        i++, j--;
    }
    temp[i] = '\0';
}
void InfixtoPostfix_7_4(char source[], char target[])
{
    int i = 0, j = 0;
    char temp;
    strcpy(target, "");
    while (source[i] != '\0')
    {
        if (source[i] == '(')
        {
            push_7_4(st, source[i]);
            i++;
        }
        else if (source[i] == ')')
        {
            while ((top_7_4 != -1) && (st[top_7_4] != '('))
            {
                target[j] = pop_7_4(st);
                j++;
            }
            if (top_7_4 == -1)
            {
                printf("\n INCORRECT EXPRESSION");
                exit(1);
            }
            temp = pop_7_4(st); // remove left parentheses
            i++;
        }
        else if (isdigit(source[i]) || isalpha(source[i]))
        {
            target[j] = source[i];
            j++;
            i++;
        }
        else if (source[i] == '+' || source[i] == '-' || source[i] == '*' ||
                 source[i] == '/' || source[i] == '%')
        {
            while ((top_7_4 != -1) && (st[top_7_4] != '(') && (getPriority_7_4(st[top_7_4]) > getPriority_7_4(source[i])))
            {
                target[j] = pop_7_4(st);
                j++;
            }
            push_7_4(st, source[i]);
            i++;
        }
        else
        {
            printf("\n INCORRECT ELEMENT IN EXPRESSION");
            exit(1);
        }
    }
    while ((top_7_4 != -1) && (st[top_7_4] != '('))
    {
        target[j] = pop_7_4(st);
        j++;
    }
    target[j] = '\0';
}
int getPriority_7_4(char op)
{
    if (op == '/' || op == '*' || op == '%')
        return 1;
    else if (op == '+' || op == '-')
        return 0;
}
void push_7_4(char st[], char val)
{
    if (top_7_4 == MAX - 1)
        printf("\n STACK OVERFLOW");
    else
    {
        top_7_4++;
        st[top_7_4] = val;
    }
}
char pop_7_4(char st[])
{
    char val = ' ';
    if (top_7_4 == -1)
        printf("\n STACK UNDERFLOW");
    else
    {
        val = st[top_7_4];
        top_7_4--;
    }
    return val;
}
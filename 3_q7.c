// 21051667 Parth Bansal
// WAP using function to find frequency of occurence of numbers in array
#include <stdio.h>
#include <stdlib.h>

int ass3_7_fre(int num, int n, int a[])
{
    int i, c = 0;
    for (i = 0; i < n; i++)
        if (a[i] == num)
            c++;

    return c;
}

int main_3_7()
{
    int n, i, num;
    printf("Enter length of array ");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));

    printf("Enter elements of array ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter no whose frequency you want to find ");
    scanf("%d", &num);
    printf("Frequency of %d is %d\n", num, ass3_7_fre(num, n, a));

    return 0;
}
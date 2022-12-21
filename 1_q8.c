#include <stdio.h>
int main_1_8()
{
    int n, lo, hi;
    printf("Enter length of array: ");
    scanf("%d", &n);
    printf("Enter array elements: \n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the first number\n");
    scanf("%d", &lo);
    printf("Enter the second number\n");
    scanf("%d", &hi);
    int flag = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == lo)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] == hi)
                {
                    ans = j - i;
                    flag++;
                    break;
                }
            }
        }
        if (flag != 0)
        {
            break;
        }
    }
    printf("Minimum distance =%d", ans);
}
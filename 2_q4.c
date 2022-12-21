//21051667 Parth Bansal
// Diff Btw two time periods
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct tp
{
    int hr;
    int min;
    int sec;
};

void ass2_4_diff_tp(struct tp t1, struct tp t2)
{
    int h, m, s;
    if (t1.sec < t2.sec)
    {
        t1.sec += 60;
        s = t1.sec - t2.sec;
        t1.min -= 1;
    }
    if (t1.min < t2.min)
    {
        t1.min += 60;
        t1.hr -= 1;
        m = t1.min - t2.min;
    }
    h = t1.hr - t2.hr;
    printf("Time is %d:%d:%d", h, m, s);
}

int main_2_4()
{
    struct tp t[2];
    int i;
    printf("Enter Time Periods \n");
    for (i = 0; i < 2; i++)
    {
        printf("Time %d", i + 1);
        printf("\nEnter time in hours minutes and seconds ");
        scanf("%d%d%d", &t[i].hr, &t[i].min, &t[i].sec);
        printf("\n");
    }

    ass2_4_diff_tp(t[0], t[1]);

    getch();
    return 0;
}
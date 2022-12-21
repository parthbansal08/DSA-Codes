// 21051667 Parth Bansal
// Add two dist (km-m) by passing structure
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct dist
{
    int km;
    int m;
};

void ass2_2_dist_cal(struct dist d1, struct dist d2)
{
    int dkm, dm;
    dkm = d1.km + d2.km;
    dm = d1.m + d2.m;
    if (dm >= 1000)
    {
        dm -= 1000;
        dkm += 1;
    }

    printf("Distance after adding is %dkm %dm", dkm, dm);
}

int main_2_2()
{
    struct dist d[2];
    int i;
    printf("Enter distances ");
    for (i = 0; i < 2; i++)
    {
        printf("\nDist %d", i + 1);
        printf("\nEnter km ");
        scanf("%d", &d[i].km);
        printf("Enter m ");
        scanf("%d", &d[i].m);
        printf("\n");
    }

    ass2_2_dist_cal(d[0], d[1]);

    getch();
    return 0;
}
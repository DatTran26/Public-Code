#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */

int main()
{
    // Tiếp tục hoàn thiện mã nguồn
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*\t");
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
 * * * * *
 * * * *
 * * *
 * *
 *
 */

int main()
{
    // Tiếp tục hoàn thiện mã nguồn
    int i, j, n;
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
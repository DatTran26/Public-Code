#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    printf("\n");
    for (int hang = 0; hang <= n; hang++)
    {
        for (int cot = 0; cot <= n; cot++)
        {
            if (cot == 0 || cot == n || (hang == cot && cot != 0 && cot != n))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
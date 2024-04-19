#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Tiếp tục hoàn thiện mã nguồn
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
            printf("*\t");
        printf("\n");
    }
    return 0;
}

/*
 **********
 **********
 **********
 **********
 */
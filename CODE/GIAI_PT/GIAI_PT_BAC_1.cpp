#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Tiếp tục hoàn thiện mã nguồn
    float a, b, x;
    scanf("%f %f", &a, &b);
    if (a == 0)
    {
        if (b == 0)
        {
            printf("Countless");
        }
        else
            printf("None");
    }
    else
    {
        x = -b / a;
        printf("%.2f", x);
    }
    return 0;
}
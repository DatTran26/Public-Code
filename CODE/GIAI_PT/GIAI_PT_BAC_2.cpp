#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Tiếp tục hoàn thiện mã nguồn
    float a, b, c, x1, x2, x3, x, delta;
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Countless");
            }
            else
            {
                printf("None");
            }
        }
        else
        {
            x = (float)-c / b;
            printf("%.2f", x);
        }
    }
    else
    {
        delta = b * b - 4 * a * c;
        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("%.2f %.2f", x1, x2);
        }
        else if (delta == 0)
        {
            x3 = (float)-b / (2 * a);
            printf("%.2f", x3);
        }
        else
            printf("None");
    }
    return 0;
}